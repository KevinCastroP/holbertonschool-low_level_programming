#include "holberton.h"

/**
 * more_numbers - Function that prints the numbers, from 0 to 9
 */

void more_numbers(void)

{
int k;
int c;

for (k = 0; k <= 9; k++)
{
for (c = 0; c <= 14; c++)
{
if (c > 9)
{
_putchar('0' + c / 10);
}
_putchar('0' + c % 10);
}
_putchar('\n');
}
}
