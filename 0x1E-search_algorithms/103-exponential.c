#include "search_algos.h"
/**
 * binary_search - Function searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: Array to be searched.
 * @size: Size of the array
 * @value: Unique value in the array to be located
 * Return: Value found or -1 if not found or NULL
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
 * exponential_search - Function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t edge = 1, min;
	int result;

	if (array == NULL || size == 0)
		return (-1);
	while (edge < size && array[edge] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", edge, array[edge]);
		edge *= 2;
	}
	min = (edge < size) ? edge : size;
	printf("Value found between indexes [%lu] and [%lu]\n", edge / 2, min - 1);
	result = binary_search(array, min, value);
	return (result);
}
