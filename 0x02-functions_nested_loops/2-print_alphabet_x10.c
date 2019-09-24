#include "holberton.h"

/**
 * print_alphabet_x10 - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
char k;
int p;
for (p = 0; p <= 9; p++)
{
for (k = 'a'; k <= 'z'; k++)
{
_putchar (k);
}
_putchar ('\n');
}
}
