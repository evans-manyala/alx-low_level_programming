#include "main.h"
/**
 * _strcpy - Function copies one string to another.
 * @src: Source string to be copied.
 * @dest: Destination string.
 * Return: String already copied.
 */
char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
