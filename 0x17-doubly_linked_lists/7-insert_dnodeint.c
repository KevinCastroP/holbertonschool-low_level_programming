#include "lists.h"
/**
 * insert_dnodeint_at_index - function to insert a new node in some position
 * @h: pointer to NULL
 * @idx: some position in the list
 * @n: new node
 * Return: the address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *new_node, *prev;
	unsigned int pos = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (!ptr && pos == idx)
	{*h = new_node;
		return (new_node);
	}
	while (ptr)
	{prev = ptr;
		if (pos == idx)
		{new_node->prev = ptr->prev;
			if (ptr->prev)
				ptr->prev->next = new_node;
			else
				*h = new_node;
			new_node->next = ptr;
			ptr->prev = new_node;
			return (new_node);
		}
		ptr = ptr->next;
		pos++;
	}
	if (pos == idx)
	{
		if (prev)
		{
			new_node->prev = prev;
			prev->next = new_node;
			return (new_node);
		}
	}
	free(new_node);
	(void) prev;
	return (NULL);
}
