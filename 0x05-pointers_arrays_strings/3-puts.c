#include "holberton.h"

/**
 * _puts     -  returns the length of a string.
 * @str : pointer to char
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */

void _puts(char *str)
{

int k = 0;

while (*(str + k) != '\0')
{
_putchar(*(str + k));
k++;
}
_putchar('\n');
}
