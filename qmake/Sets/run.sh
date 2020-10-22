#!/bin/bash
rm -fv Sets* Makefile
qmake -project
qmake
make
wait
make clean

echo ' '
echo ' '
echo "exe Sets:"
if [ -f Sets ];then
  ./Sets
else
  echo "nothing to exe"
fi

