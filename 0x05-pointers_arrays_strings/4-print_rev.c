#include "holberton.h"

/**
 * print_rev -  returns the length of a string.
 * @s : pointer to char
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_rev(char *s)
{

int k;

for (k = 0 ; s[k] != '\0' ; k++)
{

}
k--;
while (s[k] != 0)
{
_putchar(s[k]);
k--;
}
_putchar('\n');

}
