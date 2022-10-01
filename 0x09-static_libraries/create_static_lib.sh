#!/bin/bash
gcc -wall -pedantic -werror -wetra -c *.c
ar -rc liball.a *.o
