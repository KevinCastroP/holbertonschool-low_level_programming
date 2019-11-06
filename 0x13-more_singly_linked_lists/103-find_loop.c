#include "lists.h"
/**
 * find_listint_loop - function to find a loop in a linked list
 * @head: pointer to NULL
 *
 * Return: the address of the node where the loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t, *h = head;

	while (t, l, l->next)
	{
		t = t->next;
		h = h->next->next;

		if (t == h)
		{
			t = head;
		}

		while (l && t)
		{
			t = t->next;
			l = l->next;
		}

		if (t == l)
			return (l);
		t = t->next;
		h = h->next;
	}
	return ('\0');
}
