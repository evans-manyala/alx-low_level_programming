#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table, or NULL if an error occurs
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHashTable = NULL;
	unsigned long int x = 0;

	newHashTable = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (newHashTable == NULL)
		return (NULL);
	newHashTable->size = size;
	newHashTable->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

	if (newHashTable->array == NULL)
	{
		free(newHashTable);
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		newHashTable->array[x] = NULL;
	}
	return (newHashTable);
}
