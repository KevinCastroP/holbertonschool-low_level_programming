#include "holberton.h"
/**
 * print_triangle - entry point
 * @size: is the size of the triangle
 * Description: prints a triangle, followed by a new line.
 * Return: void
 */
void print_triangle(int size)
{
int i;
int j;
int k;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = size - i ; j > 1 ; j--)
_putchar(' ');
for (k = 0; k <= i ; k++)
_putchar(35);
_putchar('\n');
}
}
else
_putchar('\n');
}
