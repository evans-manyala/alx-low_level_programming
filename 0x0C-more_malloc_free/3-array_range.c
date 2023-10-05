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
	int *arr, x;

	if (min > max)
	{
		return (NULL);
	}

	arr = (int *)malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; min <= max; min++, x++)
	{
		arr[x] = min;
	}

	return (arr);
}
