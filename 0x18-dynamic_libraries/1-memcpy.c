#include "main.h"
/**
 * _memcpy - Function copies n characters from memory
 * area src to dest.
 * @src: Pointer to the source memory location.
 * @dest: Pointer to the destination memory location.
 * @n: No. of bytes of data to be copied.
 * Return: Destination address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n-- > 0)
	{
		*dest++ = *src++;
	}
	return (dest);
}
