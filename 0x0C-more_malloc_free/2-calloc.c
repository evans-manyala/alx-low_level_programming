#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc -  Functions allocates memory for an array using malloc()
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in the array.
 * Return: Pointer to the memory address allocated or NULL if
 * allocated space is not possible.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t sum_of_size;
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	sum_of_size = nmemb * size;

	p = malloc(sum_of_size);

	if (p == NULL)
	{
		return (NULL);
	}
	memset(p, 0, sum_of_size);

	return (p);
}
