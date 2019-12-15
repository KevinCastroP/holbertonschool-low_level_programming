#include "lists.h"
/**
 * add_dnodeint - function to add a new node at the beginning
 * @head: pointer to NULL
 * @n: const
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *KC;

	KC = malloc(sizeof(dlistint_t));
	if (KC == '\0')
		return (NULL);

	KC->n = n;
	KC->next = *head;
	*head = KC;
	return (*head);
}
