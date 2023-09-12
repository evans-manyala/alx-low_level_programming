#include "main.h"
/**
 * _isalpha - Checks if a character is lower  or upper case.
 * @c: is the character to check
 *
 * Description: This function checks if the input character 'c'
 * is a lower or upper case letter.
 * It returns 1 if 'c' is lower or upper case, and 0 otherwise.
 *
 * Return: 1 if 'c' is lower or upper case, 0 otherwise.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'Z')
	{
		return (1);
	}
	if (c >= 'A' || c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
