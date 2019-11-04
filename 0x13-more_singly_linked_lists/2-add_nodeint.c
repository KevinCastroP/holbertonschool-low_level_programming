#include "lists.h"
/**
 * add_nodeint - function to add new node at the beginning
 * @head: pointer of NULL
 * @n: pointer to an integer
 * Return: address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *k;

	k = malloc(sizeof(listint_t));
	if (k == '\0')
		return (NULL);

	k->n = n;
	k->next = *head;
	*head = k;
	return (*head);
}
