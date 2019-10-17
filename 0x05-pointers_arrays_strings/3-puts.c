#include "holberton.h"

/**
 * _puts     -  returns the length of a string.
 * @s : pointer to char
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */

void _puts(char *s)
{

int k = 0;

while (*(s + k) != '\0')
{
_putchar(*(s + k));
k++;
}
_putchar('\n');
}
