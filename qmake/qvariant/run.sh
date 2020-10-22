#!/bin/bash
rm -fv qvariant* Makefile
qmake -project
qmake
make
wait
make clean

echo ' '
echo ' '
echo "exe qvariant:"
if [ -f qvariant ];then
  ./qvariant
else
  echo "nothing to exe"
fi

