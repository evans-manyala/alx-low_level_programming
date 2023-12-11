#include "main.h"
/**
 * _strchr -  Function finds the first occurrence of a character in a string.
 * @s: Source string pointer.
 * @c: Character in a string.
 * Return: Character occurrence in a string.
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
	{
		s++;
	}
	return ((*s == c) ? s : NULL);
}
