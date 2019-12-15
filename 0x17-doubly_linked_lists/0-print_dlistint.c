#include "lists.h"
/**
 * print_dlistint - function to print all elements of a double linkedlist
 * @h: pointer to a value
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != '\0')
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
