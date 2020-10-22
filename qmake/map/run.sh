#!/bin/bash
rm -fv map* Makefile
qmake -project
qmake
make
wait
make clean

echo ' '
echo ' '
echo "exe map:"
./map
