#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strpbrk - Function searches a string for any set of bytes.
 * @s: Pointer string to be searched.
 * @accept: String containing characters being searched.
 * Return: Value of pointer or NULL if not found when completed.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			return (s);
		}

		s++;
	}

	return (NULL);
}
