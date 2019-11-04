#include "lists.h"
/**
 * print_listint - function to print all the elements of a list
 * @h: pointer to a value
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
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
