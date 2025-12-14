#!/bin/sh
set -e

PREFIX=/usr/local
AXE_ROOT="$PREFIX/lib/axe"
BIN_LINK="$PREFIX/bin/axe"

AXE_REPO="https://github.com/axelang/axe.git"
TMP_DIR="$(mktemp -d)"
STD_SRC="$TMP_DIR/axe/source/compiler/std"

cleanup() {
    rm -rf "$TMP_DIR"
}

trap cleanup EXIT

if ! command -v clang >/dev/null 2>&1; then
    echo "clang not found, attempting to install..."

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
        echo "Error: no supported package manager found to install clang"
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

echo "Building axe..."
"$CC" axc.c -o axe $LIBS -fmax-errors=1 -Wno-everything

echo "Cloning axe repository..."
git clone --depth=1 "$AXE_REPO" "$TMP_DIR/axe"

if [ ! -d "$STD_SRC" ]; then
    echo "Error: std directory not found in cloned repo"
    exit 1
fi

echo "Installing axe to $AXE_ROOT"

sudo mkdir -p "$AXE_ROOT"

sudo install -m 755 axe "$AXE_ROOT/axe"

sudo mkdir -p "$AXE_ROOT/std"
sudo cp -R "$STD_SRC/"* "$AXE_ROOT/std/"

sudo ln -sf "$AXE_ROOT/axe" "$BIN_LINK"

echo "Installation complete."
echo
echo "Executable:"
echo "  $BIN_LINK"
echo
echo "Std library:"
echo "  $AXE_ROOT/std"
