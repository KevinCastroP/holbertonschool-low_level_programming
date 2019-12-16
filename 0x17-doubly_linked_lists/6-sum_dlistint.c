#include "lists.h"
/**
 * sum_dlistint - function to sum all the data of a list
 * @head: pointer to NULL
 * Return: the sum value
 */
int sum_dlistint(dlistint_t *head)
{
	int c = 0;
	const dlistint_t *k = head;

	while (k != NULL)
	{
		c += k->n;
		k = k->next;
	}
	return (c);
}
