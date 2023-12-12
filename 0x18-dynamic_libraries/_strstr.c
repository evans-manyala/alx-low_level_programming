#include "main.h"
/**
 * _strstr - Function finds the first occurrence of string2 in string1.
 * @haystack: Pointer to memory locations for the search string.
 * @needle: string character being serached.
 * Return: Location of the string in memory.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
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
