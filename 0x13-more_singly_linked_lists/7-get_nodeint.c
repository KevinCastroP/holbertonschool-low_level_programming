#include "lists.h"
/**
 * get_nodeint_at_index - function to return the nth node
 * @head: pointer to NULL
 * @index: an integer variable
 *
 * Return:
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *hcopy;
	unsigned int k;

	hcopy = head;
	if (hcopy != NULL)
	{
		for (k = 0; (k < index) && (hcopy != NULL); k++)
			hcopy = hcopy->next;
		return (hcopy);
	}

	else
		return (NULL);
}
