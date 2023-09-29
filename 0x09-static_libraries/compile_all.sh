#!/bin/bash

# Source directory where your .c files are located
SOURCE_DIR="."

# List of source files to compile into the library
SOURCE_FILES=(
    0-isupper.c
    0-memset.c
    0-strcat.c
    100-atoi.c
    1-isdigit.c
    1-memcpy.c
    1-strncat.c
    2-strchr.c
    2-strlen.c
    2-strncpy.c
    3-islower.c
    3-puts.c
    3-strcmp.c
    3-strspn.c
    4-isalpha.c
    4-strpbrk.c
    5-strstr.c
    6-abs.c
    9-strcpy.c
    _putchar.c
)

# Compile each source file into an object file and add it to the library
for source_file in "${SOURCE_FILES[@]}"; do
    object_file="${source_file%.c}.o"
    gcc -c "$SOURCE_DIR/$source_file" -o "$object_file"
    ar rcs libmy.a "$object_file"
done

echo "Static library libmy.a created successfully!"

