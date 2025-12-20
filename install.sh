#!/bin/sh
set -e

if [ "$(id -u)" -ne 0 ]; then
    echo "Error: This script must be run with sudo."
    echo "Re-run with: sudo $0"
    exit 1
fi

if ! command -v git >/dev/null 2>&1; then
    echo "Error: git is not installed."
    echo "Install git and re-run this script."
    exit 1
fi

PREFIX=/usr/local
AXE_ROOT="$PREFIX/lib/axe"
AXE_REPO="https://github.com/axelang/axe.git"
SAW_REPO="https://github.com/axelang/saw.git"
AXEDOC_REPO="https://github.com/axelang/axedoc.git"
TMP_DIR="$(mktemp -d)"
STD_SRC="$TMP_DIR/axe/source/compiler/std"
EXT_SRC="$TMP_DIR/axe/source/compiler/external"

cleanup() {
    rm -rf "$TMP_DIR"
}
trap cleanup EXIT

if [ -x "$AXE_ROOT/axe" ]; then
    printf "Axe is already installed at %s. Update it? [Y/N]: " "$AXE_ROOT"
    read ans
    case "$ans" in
        y|Y) ;;
        *) exit 0 ;;
    esac
fi

if ! command -v clang >/dev/null 2>&1; then
    if command -v brew >/dev/null 2>&1; then
        brew install llvm
    elif command -v apt-get >/dev/null 2>&1; then
        sudo apt-get update
        sudo apt-get install -y clang
    elif command -v pacman >/dev/null 2>&1; then
        sudo pacman -Sy --noconfirm clang
    elif command -v dnf >/dev/null 2>&1; then
        sudo dnf install -y clang
    elif command -v zypper >/dev/null 2>&1; then
        sudo zypper install -y clang
    elif command -v xbps-install >/dev/null 2>&1; then
        sudo xbps-install -Sy clang
    elif command -v pkg >/dev/null 2>&1; then
        sudo pkg install -y llvm
    elif command -v emerge >/dev/null 2>&1; then
        sudo emerge sys-devel/clang
    else
        exit 1
    fi
fi

CC=clang
LIBS=""
if command -v ldconfig >/dev/null 2>&1; then
    if ldconfig -p 2>/dev/null | grep -q libexecinfo; then
        LIBS="-lexecinfo"
    fi
fi

"$CC" axcw.c -o axe $LIBS -fmax-errors=1 -Wno-everything

git clone --depth=1 "$AXE_REPO" "$TMP_DIR/axe"

[ -d "$STD_SRC" ] || exit 1
[ -d "$EXT_SRC" ] || exit 1

mkdir -p "$AXE_ROOT"
install -m 755 axe "$AXE_ROOT/axe"

mkdir -p "$AXE_ROOT/std"
cp -R "$STD_SRC/"* "$AXE_ROOT/std/"

mkdir -p "$AXE_ROOT/external"
cp -R "$EXT_SRC/"* "$AXE_ROOT/external/"

export AXE_HOME="$AXE_ROOT"
export PATH="$AXE_ROOT:$PATH"

git clone --depth=1 "$SAW_REPO" "$TMP_DIR/saw"
(
    cd "$TMP_DIR/saw"
    "$AXE_ROOT/axe" saw.axe
    install -m 755 saw "$AXE_ROOT/saw"
)

git clone --depth=1 "$AXEDOC_REPO" "$TMP_DIR/axedoc"
(
    cd "$TMP_DIR/axedoc"
    "$AXE_ROOT/axe" axedoc.axe
    install -m 755 axedoc "$AXE_ROOT/axedoc"
)

USER_FILES="$HOME/.profile $HOME/.bashrc $HOME/.zshrc"
if [ "$(uname)" = "Darwin" ]; then
    USER_FILES="$USER_FILES $HOME/.zprofile"
fi

for f in $USER_FILES; do
    [ -f "$f" ] || touch "$f"

    if ! grep -q "export AXE_HOME=" "$f"; then
        echo "export AXE_HOME=\"$AXE_ROOT\"" >> "$f"
    fi

    if ! grep -q 'PATH=.*\$AXE_HOME' "$f"; then
        echo 'export PATH="$AXE_HOME:$PATH"' >> "$f"
    fi
done

echo "Installation complete."
echo "Executables:"
echo "  axe     -> $AXE_ROOT/axe"
echo "  saw     -> $AXE_ROOT/saw"
echo "  axedoc  -> $AXE_ROOT/axedoc"
echo "Standard library: $AXE_ROOT/std"
echo "External: $AXE_ROOT/external"
echo "Restart your shell."
