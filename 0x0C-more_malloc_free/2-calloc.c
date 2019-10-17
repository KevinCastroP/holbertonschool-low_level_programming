#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - Function to allocate memory for an array initialized in 0
 * @nmemb: First parameter passed to function to process
 * @size: Second parameter passed to function to process
 * Return: A pointer to the allocated memory for the array of @nmemb elements
 * of @size bytes, or NULL if size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

void *matrix;
char *ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
matrix = malloc(size * nmemb);
if (matrix == NULL)
return (NULL);
ptr = matrix;
for (i = 0; i < (nmemb * size); i++)
{
ptr[i] = 0;
}
return (ptr);

}
