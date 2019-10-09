#include "holberton.h"

/**
 * _print_rev_recursion - function that print a string resource.
 * @s : pointer a string
 * Return:  pointer a char
 * On error, -1 is returned, and errno is set appropriately.
 */

void _print_rev_recursion(char *s)
{

if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
/*_putchar('\n');*/
}
return;

}
