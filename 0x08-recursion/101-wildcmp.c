#include "main.h"
/**
 * wildcmp - Recursive function to compare two strings with wildcards.
 * @s1: The first string.
 * @s2: The second string with wildcard '*'.
 * Return: 1 if the strings can be considered identical, otherwise 0.
 *
 */
int wildcmp(char *s1, char *s2) 
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == '*' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == '\0' && *s2 == '*')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else
	{
		return (0);
	}
}

