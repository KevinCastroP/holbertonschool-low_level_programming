#include "lists.h"
/**
 * delete_dnodeint_at_index - function to delete the node at index of a list
 * @head: pointer to NULL
 * @index: some position
 * Return: a value
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head, *prev;
	unsigned int pos = 0;

	while (ptr)
	{prev = ptr;
		if (pos == index)
		{
			if (ptr->prev && ptr->next)
			{
				ptr->prev->next = ptr->next;
				ptr->next->prev = prev->prev;
			}
			else if (ptr->prev)
			{
				ptr->prev->next = ptr->next;
			}
			else if (ptr->next)
			{
				ptr->next->prev = ptr->prev;
			}
			if (pos == 0)
			{
				*head = ptr->next;
			}
			free(ptr);
			return (1);
		}
		pos++;
		ptr = ptr->next;
	}
	(void) prev;
	return (-1);
}
