#include "main.h"
#include <stddef.h>
/**
 * _strchr - Function locates a string and returns pointer to the
 * first occurence of the character.
 * @s: A pointer to the string being searched.
 * @c: The character to be searched for.
 * Return: Returns value after its been found or NOT.
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	else
	{
		return (NULL);
	}
}
