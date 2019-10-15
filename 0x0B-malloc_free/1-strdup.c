#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - contain a pointer of char
 * @str : is a pointer of a string
 *
 * Return: NULL.
 */

char *_strdup(char *str)
{

int i = 0;
char *j;
int k;

if (str == NULL)
return (NULL);

while (str[i] != '\0')
i++;

i++;

j = malloc(sizeof(char) * i);

if (j == NULL)
return (NULL);

for (k = 0; k < i; k++)
j[k] = str[k];
return (j);
}
