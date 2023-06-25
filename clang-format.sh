#!/bin/bash

THIS_PATH="$(realpath "$0")"
THIS_DIR="$(dirname "$THIS_PATH")"

# C and C++
C_FILE_LIST="$(find "$THIS_DIR" | grep -E ".*(\.h|\.hpp|\.c|\.cpp|\.cxx)$")"
echo -e "::: Format C, C++, Cmake files :::"
clang-format --verbose -i --style=file $C_FILE_LIST
echo -e "::::::::::::::::::::::::::::::::::"

# Java
JAVA_FILE_LIST="$(find "$THIS_DIR" | grep -E ".*(\.java)$")"
echo -e ":::::::::: Format Java :::::::::::"
clang-format --verbose -i --style=file $JAVA_FILE_LIST
echo -e "::::::::::::::::::::::::::::::::::"
