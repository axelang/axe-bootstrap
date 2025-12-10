#!/bin/bash

if [ ! -f "bootstrap.c" ]; then
    echo "Error: bootstrap.c not found in current directory."
    exit 1
fi

sed -i '' '/^#line/d' bootstrap.c
echo "Removed all #line directives from bootstrap.c"