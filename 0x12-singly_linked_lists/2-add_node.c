#include "lists.h"
/**
 * add_node - function to add new node at the beginning of a list
 * @head: pointer of NULL
 * @str: pointer to a string
 * Return: length
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *k;
	unsigned int c = 0;

	k = malloc(sizeof(list_t));
	if (k == NULL)
		return (NULL);
	k->str = strdup(str);
	while (str[c] != '\0')
	c++;
	k->len = c;
	k->next = *head;
	*head = k;
	return (k);
}
