#include "lists.h"
/**
 * add_nodeint_end - function to add new node int at the end of a list
 * @head: pointer to NULL
 * @n: int value
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *k, *b = *head;

	k = malloc(sizeof(listint_t));
	if (k == '\0')
		return (NULL);
	k->n = n;
	if (*head == NULL)
	{
		k->next = *head;
		*head = k;
	}
	else
	{
		while (b != '\0')
		{
			if (b->next == NULL)
			{
				b->next = k;
				b = k;
				return (k);
			}
			b = b->next;
		}
	}
	return (k);
}
