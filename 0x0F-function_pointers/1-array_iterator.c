#include "function_pointers.h"
/**
 * array_iterator - Function that executes a function given
 * as a parameter on each element of an array.
 * @array: Pointer to the array of integers.
 * @size: The size of the array.
 * @action: A pointer to the function to execute on each element
 * in the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
