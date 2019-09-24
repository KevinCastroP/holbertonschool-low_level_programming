#include "holberton.h"


/**
 * print_last_digit - writes the character c to stdout
 * @k: in_variable6
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int k)
{
int result;
result = k % 10;
if (result < 0)
{
result *= -1;
}
_putchar(result + '0');
return (result % 10);
}
