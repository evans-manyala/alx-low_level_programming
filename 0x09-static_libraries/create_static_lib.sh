#!/bin/bash
gcc -Wall -pedantic -Weerro -Wextra c *.c
ar -rc liball.c *.o
