#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * array_range - Function creates an array of integers.
 * @min: Array starting element position.
 * @max: Array last element position.
 * Return: Pointer to the newly created array, otherwise
 * if min > max, print NULL, if malloc fails print NULL.
 */
int *array_range(int min, int max)
{
	size_t size, x;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	size = max - (min + 1);

	arr = calloc(size, sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	x = 0;

	while (x < size)
	{
		arr[x] = min + x;
		x++;
	}

	return (arr);
}
