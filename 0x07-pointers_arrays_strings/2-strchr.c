#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - function that fills memory with a constant byte.
 * @c : character to find
 * @s : string
 * Return:  pointer a char
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strchr(char *s, char c)
{


char k;

for (k = 0; s[k] != '\0'; k++)

{

if (s[k] == c)

{

return (s[k]);

}
}

return (NULL);

}
