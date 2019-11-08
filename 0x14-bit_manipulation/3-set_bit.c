#include "holberton.h"
/**
 * set_bit - function to set the value of a bit to 1
 * @n: pointer to a value
 * @index: contain a value of the bit to set
 *
 * Return: 1 if worked or -1 Error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | (1UL << index);
	return (1);
}
