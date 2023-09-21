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
	char *pointer = dest;
	int x1;

	for (x1 = 0; x1 < n && src[x1] != '\0'; x1++)
	{
		*pointer = src[x1];
		pointer++;
	}

	*pointer = '\0';

	return (dest);
}
