#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @c : the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: a pointer.
 */

char *create_array(unsigned int size, char c)
{

char *k;
unsigned int b;

if (size == 0)

return (NULL);

k = malloc(sizeof(char) * size);

if (k == NULL)
return (NULL);

for (b = 0; b < size; b++)
{

k[b] = c;
}

return (k);
}
