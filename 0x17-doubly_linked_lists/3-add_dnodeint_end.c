#include "lists.h"
/**
 * add_dnodeint_end - function to add new node at the end of a list
 * @head: pointer to NULL
 * @n: contain a value
 * Return: the address of the new element of NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *c = *head, *k;

	k = malloc(sizeof(dlistint_t));
	if (!k)
		return (NULL);
	k->n = n;
	k->prev = NULL;
	k->next = NULL;
	if (!c)
	{
		*head = k;
		return (k);
	}
	while (c && c->next)
	{
		c = c->next;
	}
	k->prev = c;
	c->next = k;
	return (k);
}
