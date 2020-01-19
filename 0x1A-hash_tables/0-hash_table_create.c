#include "hash_tables.h"
/**
 * hash_table_create - function to create a hash table
 * @size: is the size oof the array
 * Return: a pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	hash_node_t **head_array = NULL;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;

	head_array = malloc(sizeof(hash_node_t *) * size);
	if (head_array == NULL)
		return (NULL);

	ht->array = head_array;

	return (ht);
}
