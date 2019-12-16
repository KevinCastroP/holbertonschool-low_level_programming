#include "lists.h"
/**
 * free_dlistint - function to clear a list
 * @head: pointer to NULL
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *KC = head;

	while (KC && KC->next)
	{
		if (KC->next)
		{
			KC = KC->next;
			if (KC->prev)
				free(KC->prev);
		}
		else
		{
			free(KC);
		}
	}
	if (KC)
		free(KC);
}
