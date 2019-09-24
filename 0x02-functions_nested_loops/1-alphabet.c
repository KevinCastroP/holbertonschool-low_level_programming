#include "holberton.h"

/**
 * print_alphabet - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
char k;
for (k = 'a'; k <= 'z'; k++)
{
_putchar (k);
}
}
