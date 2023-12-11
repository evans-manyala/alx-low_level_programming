#include "main.h"
/**
 * _strncat - Function appends the entire second string to the first.
 * @src: Source string.
 * @dest: Destination string.
 * @n: Destination index.
 * Return: Concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	while (dest[i])
	{
		i++;
	}

	while (src[j] && j < n)
	{
		dest[i++] = src[j++];
	}

	dest[i] = '\0';
	return (dest);
}
