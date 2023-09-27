#include "main.h"
/**
 * _strlen_recursion - Fiunction prints length of a string.
 * @s: String length to be determined.
 * Return: String length after check.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
