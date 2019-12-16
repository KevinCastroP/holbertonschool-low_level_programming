#include "lists.h"
/**
 * add_dnodeint_end - function to add new node at the end of a list
 * @head: pointer to NULL
 * @n: contain a value
 * Return: the address of the new element of NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *k, *c = *head;

	k = malloc(sizeof(dlistint_t));
	if (k == NULL)
		return (NULL);
	k->n = n;
	k->prev = NULL;
	k->next = NULL;
	if (*head == NULL)
	{
		k->next = *head;
		*head = k;
	}
	else
	{
		while (c != NULL)
		{
			if (c->next == NULL)
			{
				c->next = k;
				c = k;
				return (k);
			}
			c = c->next;
		}
	}
	return (k);
}
