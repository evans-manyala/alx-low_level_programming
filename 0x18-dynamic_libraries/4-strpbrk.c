#include "main.h"
/**
 * _strpbrk - Function The function will return the length of string_1
 * @s: Pointers specifies the string to be searched
 * @accept: Pointer to the string containing the characters to be matched.
 * Return: Null is no common character is found between string1 and 2.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (_strchr(accept, *s) != NULL)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
