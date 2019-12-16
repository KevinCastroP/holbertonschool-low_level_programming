#include "lists.h"
/**
 * get_dnodeint_at_index - function to return a node of a list
 *@head: pointer to NULL
 *@index: the index of the node
 *Return: the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *k = head;
	unsigned int c = 0;

	while (k)
	{
		if (c == index)
		{
			return (k);
		}
		c++;
		if (!k->next)
			break;
		k = k->next;
	}
	return (NULL);
}
