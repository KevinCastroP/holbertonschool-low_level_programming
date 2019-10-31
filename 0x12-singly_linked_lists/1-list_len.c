#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * list_len - function printer all nodos in a list
 * @h: pointer of list
 *
 * Return: number of nodos
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
