#!/usr/bin/env bash
#
# Simple script which creates some files in a specified directory using the 
# `template.cpp` file.
#
# It can be run with:
#     ./contest <dir> <num>

mkdir -p "$1"

template=$(<template.cpp)

for (( i=1; i <= "$2"; i++ )) do
    echo "$template" >"$1/$i.cpp"
done
