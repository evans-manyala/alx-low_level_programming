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
	char *hay_s;
	char *pin;

	while (*haystack != '\0')
	{
		hay_s = haystack;
		pin = needle;

		while (*haystack != '\0' && *pin != '\0' && *haystack == *pin)
		{
			haystack++;
			pin++;
		}
		if (!*pin)
			return (hay_s);
		haystack = hay_s + 1;
	}
	return (0);
}
