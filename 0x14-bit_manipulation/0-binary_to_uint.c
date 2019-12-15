#include "holberton.h"
/**
 * binary_to_uint - function to convert a binary number to unsigned int
 * @b: pointer to a string of 0 and 1
 *
 * Return: the convert number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int k;
	int c;
	unsigned int p = 0;
	int a = 1;

	if (b == NULL)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '1' && b[k] != '0')
			return (0);
	}
	for (k = 0; b[k] != '\0'; k++)
		;
	for (c = (k - 1); c >= 0; c--)
	{
		if (b[c] == '1')
		{
			p += a;
		}
		a = a * 2;
	}
	return (p);
}
