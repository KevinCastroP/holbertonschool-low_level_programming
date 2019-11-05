#include "lists.h"
/**
 * sum_listint - function to sum all the data of a list
 * @head: pointer to NULL
 *
 * Return: the sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *hcopy;
	int k = 0;

	hcopy = head;

	if (hcopy != NULL)
	{
		while (hcopy->next != NULL)
		{
			k += hcopy->n;
			hcopy = hcopy->next;
		}
		k += hcopy->n;
		return (k);
	}
	else
		return (0);
}
