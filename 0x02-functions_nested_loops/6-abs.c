#include "holberton.h"
#include <stdio.h>

/**
 * _abs - writes the character c to stdout
 * @k: in_variable3
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _abs(int k)
{
if (k < 0)
{
k *= -1;
}
return (k);
}
