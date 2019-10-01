#include "holberton.h"

/**
 * puts2 -  returns the length of a string.
 * @str : pointer to char
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */

void puts2(char *str)
{

int size;

size = 0;

while (str[size] != '\0')
{
if (size % 2 == 0)
{
_putchar(str[size]);
}
size++;
}
_putchar('\n');
}
