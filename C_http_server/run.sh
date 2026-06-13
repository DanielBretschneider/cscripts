#!/bin/bash

#
# ./run.sh <filename.c>
#

# Check if a filename was provided
if [ -z "$1" ]; then
    echo "[*] run.sh: Usage: $0 <file.c>"
    exit 1
fi

# Extract filename without extension
filename=$(basename "$1" .c)

# compile using gcc
gcc -Wall -Wextra -o server server.c

# Check if compilation was successful
if [ $? -eq 0 ]; then
    ./"$filename"
else
    echo "[-] run.sh: Compilation failed. Fix errors and try again."
fi
