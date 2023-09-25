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
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			while (*needle != '\0' && *haystack == *needle)
			{
				haystack++;
				needle++;
			}

			if (*needle == '\0')
			{
				return (char *) (haystack - needle + 1);
			}

		}

		haystack++;
	}

	return (NULL);
}
