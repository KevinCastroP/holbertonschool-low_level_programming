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
/*function to create a file*/
int create_file(const char *filename, char *text_content);
/*function to appends text at the end of a file*/
int append_text_to_file(const char *filename, char *text_content);
#endif
