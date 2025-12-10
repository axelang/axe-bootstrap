#!/bin/bash

# Build script for bootstrap.c with stack trace support

# Check if on POSIX system and add -lexecinfo if needed
LIBS=""
if command -v ldconfig >/dev/null 2>&1; then
    if ldconfig -p | grep -q libexecinfo; then
        LIBS="-lexecinfo"
    fi
fi

clang bootstrap.c -o axe $LIBS -fmax-errors=1 -Wno-everything