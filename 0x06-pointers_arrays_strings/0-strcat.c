#include "main.h"
/**
 * _strcat - Function concatenantes two strings.
 * @dest: Destination or end string.
 * @src: Source string.
 * Return: Final string after concatenation.
 */

char *_strcat(char *dest, const char *src)
{
	int x1 = 0;

	while (dest[i] != '\0')
	{
		x1++;
	}

	while (*src != '\0')
	{
		dest[x1++] = *src++;
	}

	dest[i] = '\0';

	return dest;
}
