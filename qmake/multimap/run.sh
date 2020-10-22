#!/bin/bash
rm -fv multimap* Makefile
qmake -project
qmake
make
wait
make clean

echo ' '
echo ' '
echo "exe multimap:"
./multimap
