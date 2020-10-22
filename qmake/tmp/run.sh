#!/bin/bash
rm -fv tmp* Makefile
qmake -project
qmake
make
wait
make clean

echo ' '
echo ' '
echo "exe tmp:"
if [ -f tmp ];then
  ./tmp
else
  echo "nothing to exe"
fi

