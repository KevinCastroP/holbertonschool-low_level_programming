#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function each element of an array
 * @array: integer array contain numbers
 * @action: pointer to function
 * @size: size of array
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int k;
if (array == NULL || action == NULL)
return;
for (k = 0; k < size; k++)
(*action)(array[k]);
}
