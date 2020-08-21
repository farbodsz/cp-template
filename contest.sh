#!/usr/bin/env bash
#
# Simple script which creates some files in a specified directory using the
# `template.cpp` file.
#
# It can be run with:
#     ./contest <directory> <numOfFiles>

mkdir -p "$1"

template=$(<template.cpp)

chr() {
  [ "$1" -lt 256 ] || return 1
  printf "\\$(printf %o "$1")"
}

for ((i = 0; i < "$2"; i++)); do
  echo "$template" >"$1/$(chr $((i + 65))).cpp"
done
