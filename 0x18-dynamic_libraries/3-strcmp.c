#include "main.h"
/**
 * _strcmp -  Function compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 * Return: Results of string comparison.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
