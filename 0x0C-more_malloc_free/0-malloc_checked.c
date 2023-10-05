#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Function allocates memory using malloc.
 * @b: The no. of bytes to allocate
 * Return: Pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
