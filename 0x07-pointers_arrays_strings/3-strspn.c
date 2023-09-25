#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strspn - Function gets the length of a prfeix substring.
 * @s: Pointers string being searched.
 * @accept: String that contains characters allowed in
 * the prefix substring.
 * Return: Value after being searched.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		x++;
		s++;
	}

	return (x);
}
