#include "main.h"
/**
 * _strcpy - Copies the string pointed by src to dest.
 * @src: This pointer connects to the source string.
 * @dest: This pointer connects to the destination.
 * @Return Pointer to destination
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
