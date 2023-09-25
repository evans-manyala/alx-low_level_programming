#include "main.h"
#include <stddef.h>
/**
 * _memcpy - Functions copeies memory area.
 * @dest: A pointer to the destination memory address.
 * @src: A pointer to the source memory address.
 * @n: Number of bytes to copy.
 * Return: Destination address.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	if (dest == NULL || src == NULL || n == 0)
	{
		return (dest);
	}

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
