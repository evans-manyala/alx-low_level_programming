#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * and initializes it with a specific char.
 * @size: size of charactrs created in the aarray.
 * @c: character to initializee the array.
 * Return:
 * -If size = 0, NULL.
 * -If mem allocation fails, NULL
 * -Else return pointer to the allocated memmory
 *  and initialize it.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		array[x] = c;
	}

	return (array);
}
