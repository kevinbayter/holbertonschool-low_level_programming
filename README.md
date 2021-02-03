0x00. C - Hello, World
About
An introductory project on:

What is main
How to print text using printf, puts and putchar
How to get the size of a specific type using the unary operator sizeof
How to compile using gcc

Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
Why C programming is awesome
Who invented C
Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
What happens when you type gcc main.c
What is an entry point
What is main
How to print text using printf, puts and putchar
How to get the size of a specific type using the unary operator sizeof
How to compile using gcc
What is the default program name when compiling with gcc
What is the official Holberton C coding style and how to check your code with betty-style
How to find the right header to include in your source code when using a standard library function
How does the main function influence the return value of the program

man or help:
gcc
printf (3)
puts
putchar

Requirements
C
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 14.04 LTS using gcc 4.8.4
All your files should end with a new line
A README.md file at the root of the holbertonschool-low_level_programming repo, containing a description of the repository
A README.md file, at the root of the folder of this project, containing a description of the project
There should be no errors and no warnings during compilation
You are not allowed to use system
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

File Descriptions
Mandatory
0-preprocessor - a bash script that runs a C file, saved in the variable $CFILE, through the preprocessor and saves the result into another file, named c

1-compiler - a bash script that compiles a C file, saved in the variable $CFILE, but does not link. The output file will be named the same as the C file, but with the extension .o instead of .c

2-assembler - a bash script that generates the assembly code of a C file, saved in the variable $CFILE. The output file will be named the same as the C file, but with the extension .s instead of .c.

3-name - a script that compiles a C file, saved in the variable $CFILE, and creates an executable named cisfun.

4-puts.c - a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line using the function puts.

5-printf.c - a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line using the function printf.

6-size.c - a C program that prints the size of various types on the computer it is compiled and run on.

Advanced
100-intel - a bash script that generates the assembly code (Intel syntax) of a C file, saved in the variable $CFILE. The output file will be named the same as the C file, but with the extension .s instead of .c.

101-quote.c - a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error without using any functions listed in the NAME section of man (3) printf or man (3) puts.