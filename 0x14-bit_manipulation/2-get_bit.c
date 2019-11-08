#include "holberton.h"
/**
 * get_bit - function to return the value of a bit
 * @n: ULint value
 * @index: unsigned int value
 *
 * Return: the value of the bit or -1 if is Error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);
	mask = 1UL << index;
	if (n & mask)
		return (1);
	return (0);
}
