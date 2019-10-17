#include "holberton.h"

/**
 * _calloc - allocaes memory for an array, using malloc, and set all
 * entries with 0.
 * @nmemb: is the number of elements of the array
 * @size: is the size of bytes of each element
 * Return: a pointer to the memory space.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

unsigned int c;
char *arr;

if ((nmemb == 0) || (size == 0))
return (NULL);

arr = malloc(nmemb * size);

if (arr == NULL)
{
return (NULL);
}

for (c = 0; c < nmemb * size; c++)
arr[c] = '\0';

return (arr);

}
