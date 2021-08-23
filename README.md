# C - Simple Shell

## Description
In this proyect we are tasked with creating our own simple UNIX command interpreter. The program must have the exact same output as sh
(/bin/sh) as well as the exact same error output. The only difference is when you print a error, the name of the program must be equivalent
to your argv[0].

## Proyect Requierements

*   All your files will be compiled on Ubuntu 14.04 LTS
*   Your C programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
*   All your files should end with a new line
*   A README.md file, at the root of the folder of the project is mandatory
*   Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
*   No more than 5 functions per file
*   All your header files should be include guarded
*   Use system calls only when you need to

## Files

## Instructions

*   Compiling the program: gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

*   Interactive mode:

$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$

*   Non-interactie mode:

$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$

## Example

## Bugs
At the time we do not know bugs.

## Authors
Christian Rojas https://github.com/ChristianRojasOliver | Vanessa Loiz https://github.com/vanessaloiz
