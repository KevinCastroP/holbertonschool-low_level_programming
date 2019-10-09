#include "holberton.h"

/**
 * _puts_recursion - function that print a string resource.
 * @s : pointer a string
 * Return:  pointer a char
 * On error, -1 is returned, and errno is set appropriately.
 */

void _puts_recursion(char *s)
{

if (*s != '\0')
{
_putchar(*s);
s++;
_puts_recursion(s);
}
else
{
_putchar('\n');
return;
}

}
