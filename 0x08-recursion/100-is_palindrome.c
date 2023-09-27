#include "main.h"
#include <string.h>
/**
 * is_palindrome - Function tests if a string is a palindrome.
 * @s: string being tested.
 * Return: 1 if string 's' is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	if (strlen(s) <= 1)
	{
		return (1);
	}

	return (s[0] == s[strlen(s) - 1] && is_palindrome(s + 1));
}
