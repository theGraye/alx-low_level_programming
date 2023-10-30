#!/bin/bash
gcc -Wall -pedantic -Werror -Wextea -c *.c
ar -rc liball.a *.o
ranlib liball.a
