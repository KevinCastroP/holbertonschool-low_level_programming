#include "lists.h"
/**
 * free_list - function to free a list
 * @head: pointer of NULL
 *
 * Return: a value
 */

void free_list(list_t *head)
{
	list_t *copy;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			copy = head->next;
			free(head->str);
			free(head);
			head = copy;
		}
		free(head->str);
		free(head);
	}

}
