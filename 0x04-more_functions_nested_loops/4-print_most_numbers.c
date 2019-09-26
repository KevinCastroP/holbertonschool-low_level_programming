#include "holberton.h"

/**
 * print_most_numbers - check the code for Holberton School students.
 * Return: null.
 */

void print_most_numbers(void)
{
int k;

for (k = 0; k <= 9; k++)
{
if (!(k == 2 || k == 4))
{
_putchar(k + '0');
}
}
_putchar('\n');

}
