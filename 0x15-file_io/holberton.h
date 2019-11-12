#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/*function to print*/
int _putchar(char c);
/*function to read a text file and print it to POSIX*/
ssize_t read_textfile(const char *filename, size_t letters);
#endif
