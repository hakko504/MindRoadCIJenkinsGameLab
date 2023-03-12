#!/bin/bash
if [ -d "googletest" ]
then
    cd googletest
    git pull
else
    git clone https://github.com/googletest/googletest.git
fi
mkdir -pv build
cd build
cmake ..
make
