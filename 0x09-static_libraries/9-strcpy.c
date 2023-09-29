#include "main.h"
/**
 * _strncpy - Copies a strin.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Length of the string.
 * Return: final string copied to the destination.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x1;

	for (x1 = 0; x1 < n && src[x1] != '\0'; x1++)
	{
		dest[x1] = src[x1];
	}
	while (x1 < n)
	{
		dest[x1] = '\0';
		x1++;
	}

	return (dest);
}
