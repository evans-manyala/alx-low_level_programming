#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;

	if (ht == NULL)
		return;

	printf("{");

	for (x = 0; x < ht->size; x++)
	{
		hash_node_t *current = ht->array[x];

		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);

			current = current->next;

			if (current != NULL)
				printf(", ");
		}
	}

	printf("}\n");
}
