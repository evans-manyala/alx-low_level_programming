#include "main.h"
/**
 * _strncpy - Function copies string from source
 * to destination.
 * @src: Pointer to the source string to be copied.
 * @dest: Pointer to the new destination string address.
 * @n: String length
 * Return: Pointer of the new address.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	while (n-- > 0 && (*dest++ = *src++) != '\0')
		;
	while (n-- > 0)
	{
		*dest++ = '\0';
	}
	return (ptr);
}
