#include "holberton.h"
/**
 * _isdigit - Function that checks for uppercase character.
 * @k: Check value return.
 * Return: 1 if int == digit and 0 else.
 */

int _isdigit(int k)
{
if (k >= 0 && k <= 9)
{
return (1);
}
else
{
return (0);
}
}
