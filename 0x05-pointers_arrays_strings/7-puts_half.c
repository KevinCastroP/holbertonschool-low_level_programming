#include "holberton.h"

/**
 * puts_half -  returns the length of a string.
 * @str : pointer to char
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */

void puts_half(char *str)
{

int size;
for (size = 0; str[size] != '\0'; size++)
;
size++;
for (size /= 2; str[size] != '\0'; size++)
{
_putchar(str[size]);
}
_putchar('\n');
}
