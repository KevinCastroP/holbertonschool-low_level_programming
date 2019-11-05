#include "lists.h"
/**
 * pop_listint - function to delete the head node
 * @head: pointer to pointer to NULL
 *
 * Return: a value
 */
int pop_listint(listint_t **head)
{
	listint_t *copy;
	int c;

	if (*head != NULL)
	{
		copy = (*head)->next;
		c = (*head)->n;
		free(*head);
		*head = copy;
		return (c);
	}
	else
		return (0);
}
