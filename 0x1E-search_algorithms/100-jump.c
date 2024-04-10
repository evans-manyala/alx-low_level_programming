#include "search_algos.h"
/**
 * jump_search - Function searches for a value in a sorted array
 * of integers using the Jump search algorithm.
 * @array: Array object containing values
 * @size: Size of the array.
 * @value: Value being searched for
 *
 * Description:
 * Jump search is an algorithm for finding the position of a target value
 * within a sorted array. It works by making jumps of a fixed size (sqrt(size))
 * until the block containing the target value is found. Then, it performs
 * a linear search within that block to find the exact position of the value.
 *
 * Return: The index of the value in the array if found, otherwise -1.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = 0, i = 0;

	if (array != NULL)
	{
		while (high < size && array[high] < value)
		{
			low = high;
			high = high + sqrt(size);
			printf("Value checked array[%lu] = [%d]\n",
			       low, array[low]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       low, high);
		for (i = low; i <= high; i++)
		{
			if (i < size)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
	}
	return (-1);
}
