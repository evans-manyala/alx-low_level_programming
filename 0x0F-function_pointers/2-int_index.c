#include "function_pointers.h"
/**
 * int_index - Function returns the index of elements
 * for which the compare function does not return 0.
 * @size: Number of elements in the array.
 * @array: An array of integer values.
 * @cmp: A pointer to the function to compare values.
 * Return: value if successful, otherwise -1 if size is
 * <= 0 or size is empty.
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
		{
			return (x);
		}
	}

	return (-1);
}
