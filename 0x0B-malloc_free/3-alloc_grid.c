#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * alloc_grid - Function returns a pointer to a 2D array of integers.
 * @height: Height of the array grid.
 * @width: Width of the array grid.
 * Return: pointer to a 2D array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array, x, y;

	if (height == 0 || width == 0)
	{
		return (NULL);
	}

	array = (int **)malloc(height * sizeof(int *));

	if (array  == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		array[x] = (int *)malloc(width * sizeof(int));

		if (array[x] == NULL)
		{
			for (y = 0; y < x; y++)
			{
				free(array[y]);
			}

			free(array);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y  < width; y++)
		{
			array[x][y] = 0;
		}
	}
	return (array);
}

