#include "holberton.h"
#include <stdio.h>
#include <strings.h>

/**
 * _strspn  - function that gets the length of a prefix substring.
 * @s :   input string
 * @accept :  character to find firts occurrence
 * Return:  Returns the number of bytes in the initial segment of s which
 *consist only of bytes from accept
 * On error, -1 is returned, and errno is set appropriately.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j = 0;
int counter = 0;
int sw = 0;

for (i = 0 ; s[i] != '\0'; i++)
{
sw = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
counter++;
sw = 1;
}
}
if (sw == 0)
{
break;
}

}

return (counter);
}
