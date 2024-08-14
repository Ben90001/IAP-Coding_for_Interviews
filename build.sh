#!/bin/bash

#bash setup
set -x
set -e

mkdir ./build
cd ./build
cmake ..
make
echo "Running the program: "
./tests