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
	size_t i, middle;

	if (left <= right)
	{
		middle = left + (right - left) / 2;

		printf("Searching in array: ");

		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		if (array[middle] == value && (middle == left || array[middle - 1] < value))
			return ((int)middle);
		else if (array[middle] >= value)
			return (advanced_binary_recursive(array, left, middle - 1, value));
		else
			return (advanced_binary_recursive(array, middle + 1, right, value));
	}
	return (-1);
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
