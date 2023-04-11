#!/bin/bash
gcc -Wall -pendatic -Werror -Wexra -c *.c
ar -rc liball.a *.o
ranlib liball.a
