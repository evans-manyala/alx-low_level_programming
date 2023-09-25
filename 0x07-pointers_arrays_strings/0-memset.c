#include "main.h"
#include <stddef.h>
/**
 * _memset - Function fills memory with constant byte.
 * @s: A pointer to the memory area to be filled.
 * @b: The constanst bute to fill the memory area.
 * @n: The number of bytes to fill.
 * Return: value to return.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	if (s == NULL || n == 0)
	{
		return (s);
	}

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
