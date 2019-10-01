#include "holberton.h"
#include <stdio.h>

/**
 * _strlen -  Reset a number whith 98 value
 * @s : Pointer to int. adress variable to reset
 * Return:  int
 */

int _strlen(char *s)

{

int a = 0;

while (*(s + a) != '\0')
{
a++;
}

return (a);

}
