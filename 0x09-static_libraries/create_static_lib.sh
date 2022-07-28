#!/bin/bash
gcc -c *.c
ar rc lball.a *.o
ranlib liball.a
