#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @src: Pointer to the source string.
 * @dest: Pointer to the destination buffer.
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *origin = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (origin);
}
