#include "holberton.h"

/**
 * print_line - Function that prints the numbers, from 0 to 9
 * Return 0.
 * @n: Desc.
 */

void print_line(int n)
{
int t;

if (n <= 0)
{
_putchar('\n');
return;
}
for (t = 0; t <= n; t++)
{
_putchar('_');
}
_putchar('\n');
}
