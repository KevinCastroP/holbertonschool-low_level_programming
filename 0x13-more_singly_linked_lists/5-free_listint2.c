#include "lists.h"
/**
 * free_listint2 - function to free a list
 * @head: pointer to pointer to NULL
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *copy;

	if (head == NULL)
		return;

	if (*head != NULL)
	{
		while ((*head)->next != NULL)
		{
			copy = (*head)->next;
			free(*head);
			*head = copy;
		}
		free(*head);
		*head = NULL;
	}
}
