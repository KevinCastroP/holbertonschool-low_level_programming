#include "holberton.h"
/**
 * print_binary - function to print the binary representation of a number
 * @n: contain a ULint number
 *
* Return: notthing
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;

	i = 1UL << 63;
	if (n == 0)
		_putchar ('0');
	while (i > 0)
	{
		if (n & i)
			break;
		i = i >> 1;
	}
	while (i > 0)
	{
		if (n & i)
			_putchar ('1');
		else
			_putchar ('0');
		i >>= 1;
	}
}
