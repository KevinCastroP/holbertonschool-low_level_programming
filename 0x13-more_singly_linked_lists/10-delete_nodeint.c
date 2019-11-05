#include "lists.h"
/**
 *delete_nodeint_at_index - function to delete the node at index of a list
 * @head: pointer to pointer to NULL
 * @index: the index of the node to delete
 *
 * Return: a value
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c, *head2;
	unsigned int k;

	head2 = *head;
	if (head2 != NULL && index != 0)
	{
		for (k = 0; k < index && head2 != NULL; k++)
		{
			c = head2;
			head2 = head2->next;
		}
		if (head2 != NULL)
		{
			c->next = head2->next;
			free(head2);
			return (1);
		}
		else
			return (-1);
	}
	if (head2 != NULL && index == 0)
	{
		c = head2->next;
		free(head2);
		*head = c;
		return (1);
	}
	else
		return (-1);
}
