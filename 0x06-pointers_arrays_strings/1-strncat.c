#include "main.h"
/**
 * _strncat - Function concatenates two strings
 * using at most n bytes from the source string.
 * @dest: destination string data.
 * @src: source string data.
 * @n: bytes from the source string.
 * Return: Final string after concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	char *pointer = dest;
	int x1;

	while (*pointer != '\0')
	{
		pointer++;
	}

	for (x1 = 0; x1 < n && src[x1] != '\0'; x1++)
	{
		*pointer = src[x1];
		pointer++;
	}

	*pointer = '\0';

	return (dest);
}
