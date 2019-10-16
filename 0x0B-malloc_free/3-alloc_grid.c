#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
int **c;
int k = 0;
int b;
if (width <= 0 || height <= 0)
{
return (NULL);
}
else if (width == 1 && height == 1)
{
return (NULL);
}
c = malloc(height * sizeof(*c));
if (c == NULL)
return (NULL);
for (k = 0; k < height; k++)
{
c[k] = malloc(width * sizeof(int));
if (c[k] == NULL)
{
for (k = k - 1; k >= 0; k--)
{
free(c[k]);
}
free(c);
return (NULL);
}
b = 0;
while (b < width)
{
c[k][b] = 0;
}
}
return (c);
}
