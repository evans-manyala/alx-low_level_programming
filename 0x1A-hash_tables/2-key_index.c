#include "hash_tables.h"
/**
 * key_index - Get the index for a given key using the hash_djb2 algorithm
 * @key: The key to find the index for
 * @size: The size of the array in the hash table
 *
 * Return: The index at which the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	if (key == NULL || size == 0)
		return (0);
	return (index);
}
