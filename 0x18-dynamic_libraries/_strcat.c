#include "main.h"
/**
 * _strcat - Function  returns a pointer to the concatenated string.
 * @src: Source string.
 * @dest: Destination string.
 * Return: Concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i])
	{
		i++;
	}

	int j = 0;

	while (src[j])
	{
		dest[i++] = src[j++];
	}

	dest[i] = '\0';
	return (dest);
}
