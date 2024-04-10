#include "search_algos.h"
/**
 * binarySearch - Function searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: Array is a pointer to the first element of the array to search in
 * @low: Left index in the array
 * @high: Right index in the array
 * @value: Value to search for in the array
 * 
 * Return: Value found or -1 if not found or NULL
*/

int binarySearch(int *array, int low, int high, int value)
{
	int middle, i;

    if (array == NULL || low > high)
		return (-1);

	while (low <= high)
	{
		middle = low + (high - low) / 2;
		printf("Searching in array: ");

		for (i = low; i < high; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);

		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			low = middle + 1;
		else
			high = middle - 1;
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
	result = binarySearch(array, edge/2, min, value);
	return (result);
}
