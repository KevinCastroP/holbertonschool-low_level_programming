#include "hash_tables.h"
/**
 * key_index - function to give you the index of a key
 * @key: pointer
 * @size: size of the array of the hash table
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index_key = hash_djb2(key) % size;

	return (index_key);
}
