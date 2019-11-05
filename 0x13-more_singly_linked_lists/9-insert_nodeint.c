#include "lists.h"
/**
 * insert_nodeint_at_index - function to insert new node at a given position
 * @head: pointer to pointer to NULL
 * @idx: unsigned int variable
 * @n: integer variable
 *
 * Return: the address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *k, *hcopy;
	unsigned int c;

	hcopy = *head;
	k = malloc(sizeof(listint_t));

	if (k == NULL)
		return (NULL);
	k->n = n;

	if (idx == 0)
	{
		k->next = hcopy;
		*head = k;
		return (k);
	}
	for (c = 0; (c < idx - 1); c++)
	{
		if (hcopy == NULL)
		{
			free(k);

			return (NULL);
		}
		hcopy = hcopy->next;
	}
	k->next = hcopy->next;
	hcopy->next = k;
	return (k);
}
