#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _realloc - Function reallocates memory block using malloc()
 * and free()
 * @new_size: New size of the memory block.
 * @old_size: Old size of the memory blocked.
 * @ptr: Pointer to the memory block to be reallocated.
 * Return: A pointer to the reallocated memory block or NULL if
 * allocation fails.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_pointer;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_pointer = malloc(new_size);

	if (new_pointer == NULL)
	{
		return (NULL);
	}

	memcpy(new_pointer, ptr, (old_size < new_size) ? old_size : new_size);

	free(ptr);

	return (new_pointer);
}
