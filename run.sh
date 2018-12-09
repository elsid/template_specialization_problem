#!/bin/bash -ex

mkdir -p build
cd build
cmake ..
make
./ok_1
./ok_2
./problem
