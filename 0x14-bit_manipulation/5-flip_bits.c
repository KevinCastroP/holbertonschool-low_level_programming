#include "holberton.h"
/**
 * flip_bits - function to flip one number to another
 * @n: contain the first value
 * @m: contain the second value
 *
 * Return: the # of bits you need to flip the number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int bits = 0;

	i = 1UL << 63;

	while (i > 0)
	{
		if (n & i)
			break;
		i >>= 1;
	}
	n ^= m;
	while (i > 0)
	{
		if (n & i)
			bits++;
		i >>= 1;
	}
	return (bits);
}
