#include "search_algos.h"
/**
 * advanced_binary_recursive - Function to perform advanced binary search.
 * Searches for the first occurrence of a value in a sorted array.
 *
 * @array: Pointer to the first element of the array.
 * @left: Left index of the subarray to search.
 * @right: Right index of the subarray to search.
 * @value: Value to search for.
 *
 * Return: Index of the first occurrence of the value, or -1 if not found.
*/

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t j;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (j = left; j < right; j++)
		printf("%d, ", array[j]);
	printf("%d\n", array[j]);

	j = left + (right - left) / 2;
	if (array[j] == value && (j == left || array[j - 1] != value))
		return (j);
	if (array[j] >= value)
		return (advanced_binary_recursive(array, left, j, value));
	return (advanced_binary_recursive(array, j + 1, right, value));
}

/**
 * advanced_binary - Function searches for a value in a sorted array of
 * integers and returns the index of the first value in the array
 * (if this value appears more than once in the array).
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the first occurrence of the value, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
