#include "holberton.h"
#include <stdio.h>
int cont(char *s, int n);


/**
 * _strlen_recursion - function that print a string resource.
 * @s : pointer a string
 * Return:  pointer a char
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen_recursion(char *s)
{

return (cont(s, 0));
}

/**
 *cont - contain the value of n
 * @s : pointer of a string
 * @n : contain the string
 *Return: Descp
*/

int cont(char *s, int n)
{

if (*(s + n) != '\0')

{

return (cont(s, n + 1));

}
else
{

return (n);
}

}
