#include "main.h"
/**
 * _strspn - Function returns the length of the initial
 * substring of the string.
 * @s: Pointer to the initial substring.
 * @accept: Pointer to accepted value
 * Return: Length of the initial substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && _strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}
	return (count);
}
