# MFMS - Week 9

## Introduction
The Municipal Financial Management System (MFMS) is organised
into separate C source files and header files.

## Modules

- main.c: Controls the main program.
- employees.c: Contains employee functions.
- employees.h: Contains employee function declarations.
- budget.c: Contains budget functions.
- budget.h: Contains budget function declarations.
- utilities.c: Contains utility functions.
- utilities.h: Contains utility function declarations.
- reports.c: Generates employee and budget reports.
- reports.h: Contains report function declarations.

## Compilation

Compile the source files separately:

gcc -std=c99 -Wall -Wextra -pedantic -c main.c
gcc -std=c99 -Wall -Wextra -pedantic -c employees.c
gcc -std=c99 -Wall -Wextra -pedantic -c budget.c
gcc -std=c99 -Wall -Wextra -pedantic -c utilities.c
gcc -std=c99 -Wall -Wextra -pedantic -c reports.c

Link the object files:

gcc main.o employees.o budget.o utilities.o reports.o -o mfms.exe

Run the program:

./mfms.exe