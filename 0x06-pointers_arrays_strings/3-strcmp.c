#include "main.h"
/**
 * _strcmp - Compares two strings.
 * @s1: String 1 to be compared with String 2.
 * @s2: String 2 to be compared with String 1.
 * Return: When successful 0 otherwise 1.
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
