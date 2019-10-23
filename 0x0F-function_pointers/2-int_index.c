#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - search an integer
 * @array: integer array contain numbers
 * @cmp: pointer to a function compare
 * @size: size of array
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int k;
if (array == NULL || cmp == NULL)
return (-1);
for (k = 0; k < size; k++)
{
if ((*cmp)(array[k]) != 0)
return (k);
}
return (-1);
}
