#include "holberton.h"
#include <stdio.h>

/**
 * print_array -  returns the length of a string.
 * @a : 1st
 * @n : 2nd
 * Return:  no return void
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", *a);
if (i < n - 1)
{
printf(", ");
}
a++;
}
printf("\n");

}
