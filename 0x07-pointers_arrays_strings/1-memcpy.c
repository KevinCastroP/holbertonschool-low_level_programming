#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - function that fills memory with a constant byte.
 * @src : pointer have a string
 * @dest : pointer to copy
 * @n : number bytes to copy
 * Return:  pointer a char
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int k;

for (k = 0; k < n; k++)
{
dest[k] = src[k];
}
return (dest);
}
