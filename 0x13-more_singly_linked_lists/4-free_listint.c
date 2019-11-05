#include "lists.h"
/**
 * free_listint - function to free a list
 * @head: pointer to NULL
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *copy;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			copy = head->next;
			free(head);
			head = copy;
		}
		free(head);
	}
}
