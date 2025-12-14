#!/bin/sh
set -e

PREFIX=/usr/local
AXE_ROOT="$PREFIX/lib/axe"
BIN_LINK="$PREFIX/bin/axe"
AXE_REPO="https://github.com/axelang/axe.git"
TMP_DIR="$(mktemp -d)"
STD_SRC="$TMP_DIR/axe/source/compiler/std"
ENV_FILE="/etc/axe.sh"

cleanup() {
    rm -rf "$TMP_DIR"
}

trap cleanup EXIT

if [ -x "$AXE_ROOT/axe" ]; then
    echo "Axe is already installed at:"
    echo "  $AXE_ROOT"
    echo
    printf "Update it? [Y/N]: "
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

"$CC" axc.c -o axe $LIBS -fmax-errors=1 -Wno-everything

git clone --depth=1 "$AXE_REPO" "$TMP_DIR/axe"

[ -d "$STD_SRC" ] || exit 1

sudo mkdir -p "$AXE_ROOT"
sudo install -m 755 axe "$AXE_ROOT/axe"
sudo mkdir -p "$AXE_ROOT/std"
sudo cp -R "$STD_SRC/"* "$AXE_ROOT/std/"
sudo ln -sf "$AXE_ROOT/axe" "$BIN_LINK"

echo "export AXE_HOME=\"$AXE_ROOT\"" | sudo tee "$ENV_FILE" >/dev/null

if ! grep -q "$ENV_FILE" /etc/profile 2>/dev/null; then
    echo ". $ENV_FILE" | sudo tee -a /etc/profile >/dev/null
fi

if [ -f /etc/zshrc ] && ! grep -q "$ENV_FILE" /etc/zshrc; then
    echo ". $ENV_FILE" | sudo tee -a /etc/zshrc >/dev/null
fi

echo "Installation complete."
