#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table,
 * or NULL if an error occurs
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHashTable;

	if (size == 0)
		return (NULL);
	newHashTable = malloc(sizeof(hash_table_t));

	if (newHashTable)
		return (NULL);
	newHashTable->size = size;
	newHashTable->array = calloc((size_t)size, sizeof(hash_node_t *));

	if (!newHashTable->array)
	{
		free(newHashTable);
		newHashTable = NULL;
		return (NULL);
	}
	return (newHashTable);
}
