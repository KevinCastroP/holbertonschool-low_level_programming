#include "holberton.h"
#include <stdio.h>
#include <strings.h>

/**
 * _strpbrk  - function that searches a string for any of a set of bytes
 *The _strpbrk() function locates the first occurrence in
 *the string s of any of the bytes in the string accept
 * @s :   input string
 * @accept :  character to find firts occurrence
 * Return:Returns a pointer to the byte in s that matches one of the bytes in
 *accept, or NULL if no such byte is found
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j = 0;

for (i = 0 ; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}

return (NULL);
}
