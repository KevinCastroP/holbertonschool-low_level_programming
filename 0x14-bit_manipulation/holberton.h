#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/*function to print a char*/
int _putchar(char c);
/*function to convert a binary number to unsigned int*/
unsigned int binary_to_uint(const char *b);
/*function to print the binary representation of a number*/
void print_binary(unsigned long int n);
/*function to return the value of a bit at a given index*/
int get_bit(unsigned long int n, unsigned int index);
/*function to sets the value of a bit to 1 at a given index*/
int set_bit(unsigned long int *n, unsigned int index);
/*function to set the value of a bit to 0 at a given index*/
int clear_bit(unsigned long int *n, unsigned int index);
/*function to return the number of bits you need to flip get one # to another*/
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif
