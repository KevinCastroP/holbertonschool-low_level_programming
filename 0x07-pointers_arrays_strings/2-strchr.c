#include "holberton.h"
#include <stddef.h>

/**
 *_strchr - concatnate
 *@s: dest pointer
 *@c: src pointer
 *Return: something
 */

char *_strchr(char *s, char c)
{

int k;

for (k = 0; s[k] != '\0'; k++)
{
if (s[k] == c)
{
return (s + k);
 break;
}
}

return (0);

}
