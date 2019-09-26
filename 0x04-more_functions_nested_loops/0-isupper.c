#include "holberton.h"
/**
 * _isupper - Function that checks for uppercase character.
 * @k: Check value return.
 * Return: 1 if character == Uppercase and 0 else.
 */

int _isupper(int k)
{
if (k >= 'A' && k <= 'Z')
{
return (1);
}
return (0);
}
