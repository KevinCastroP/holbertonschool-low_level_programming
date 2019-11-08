#include "holberton.h"
/**
 * clear_bit - function to set the value of a bit to 0
 * @n: pointer to a value
 * @index: contain a value
 *
 * Return: 1 if it worked or -1 if is Error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index;

	if (index > 63)
		return (-1);

	*n = *n & (~mask);
	return (1);
}
