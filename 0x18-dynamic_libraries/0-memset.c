#include "main.h"
/**
 * _memset - Function copies the character c to the first
 * n characters of the string pointed to.
 * @s: Pointer to Source string.
 * @n: This is the number of bytes to be set to the value
 * @b: This is the value to be set.
 * Return:  A pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n-- > 0)
	{
		*s++ = b;
	}
	return (s);
}
