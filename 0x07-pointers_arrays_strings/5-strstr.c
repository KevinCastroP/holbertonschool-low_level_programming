#include "holberton.h"
#include <stdio.h>
#include <strings.h>

/**
 * _strstr - function that locates a substring.
 * @haystack :   input string
 * @needle:  character to find firts occurrence
 * Return:Returns a pointer to the byte in s that matches one of the bytes in
 *accept, or NULL if no such byte is found
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strstr(char *haystack, char *needle)
{
unsigned int i = 0;
unsigned int j = 0;
int sw = 0;
int swant = 0;

for (i = 0 ; needle[i] != '\0'; i++)
{
sw = 0;
for (j = 0; haystack[j] != '\0'; j++)
{
if (needle[i] == haystack[j])
{
return (needle);
sw = 1;
swant = 1;
}

else
{
swant = 0;
}
}
if (sw == 1 && swant == 0)
{
break;
}
else
{
continue;
}
}

return (NULL);
}
