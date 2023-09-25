#include "main.h"
#include <stddef.h>
/**
 * _strstr - Function locates a substring.
 * @haystack: Pointer to a string to searched.
 * @needle: Pointer to the substring being to be searched for.
 * Return: valueif located in the haystack; otherwise NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay_s = haystack, *n = needle;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		while (*n != '\0' && *hay_s == *n)
		{
			hay_s++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
