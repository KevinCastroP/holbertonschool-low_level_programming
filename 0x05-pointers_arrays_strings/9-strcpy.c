#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy -  returns the length of a string.
 * @dest : 1st
 * @src : 2nd
 * Return:  no return void
 */

char *_strcpy(char *dest, char *src)
{

int i;

i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);

}
