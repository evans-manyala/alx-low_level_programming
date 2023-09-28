#include "main.h"
#include <string.h>
/**
 * is_palindrome - Function tests if a string is a palindrome.
 * @s: string being tested.
 * @finish: The last index.
 * @start: The start index.
 * Return: 1 if string 's' is a palindrome, otherwise 0
 */
int is_palindrome_helper_function(char *s, int start, int finish);
int is_palindrome(char *s)
{
	int l = strlen(s);

	return (is_palindrome_helper_function(s, 0, l - 1));
}
/**
 * is_palindrome_helper_function - Recursive helper function to check
 * if a string is a palindrome.
 * @s: string to be tested.
 * @start: The start index.
 * @finish: The last index.
 * Return: 1 if string is palindrome, otherwise 0.
 */

int is_palindrome_helper_function(char *s, int start, int finish)
{
	if (start >= finish)
	{
		return (1);
	}
	if (s[start] == s[finish])
	{
		return (is_palindrome_helper_function(s, start + 1, finish - 1));
	}
	return (0);
}
