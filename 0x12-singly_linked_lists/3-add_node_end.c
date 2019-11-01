#include "lists.h"
/**
 * add_node_end - function to add new node at the end of a list
 * @head: pointer of NULL
 * @str: pointer to a string
 * Return: length
 */
list_t *add_node_end(list_t **head, const char *str)
{
		list_t *k, *b = *head;
		unsigned int c = 0;

		k = malloc(sizeof(list_t));
		if (k == NULL)
			return (NULL);
		k->str = strdup(str);
		while (str[c] != '\0')
			c++;
		k->len = c;

		if (*head == NULL)
		{
			k->next = *head;
			*head = k;
		}
		else
		{
			while (b != NULL)
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
