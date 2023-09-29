#!/bin/bash

# Specify the common prefix
prefix="_"

for file in *-.c ; do
    if [ -f "$file" ]; then
        newname="$prefix$file"
        mv "$file" "$newname"
    fi
done

