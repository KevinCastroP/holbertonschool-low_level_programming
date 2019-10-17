#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate 2 strings.
 * @s1 : string 1.
 * @s2 : string 2.
 * Return: NULL if is failure.
 */

char *str_concat(char *s1, char *s2)
{

int k = 0;
int c = 0;
char *b;
int p = 0;

if (s1 != NULL)

{

while (s1[k] != '\0')
k++;
}

if (s2 != NULL)
{

while (s2[c] != '\0')
c++;
}

b = malloc(sizeof(char) * (k + c) +1);

if (b == NULL)
return (NULL);

for (p = 0; p < k; p++)
b[p] = s1[p];

for (p = 0; p < c; p++)
b[p + k] = s2[p];
b[k + c] = '\0';

return (b);

}
