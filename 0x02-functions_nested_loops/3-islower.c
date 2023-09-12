#include "main.h"
#include <ctype.h>
/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Description: This function checks if the input character 'c'
 * is a lowercase letter.
 * It returns 1 if 'c' is lowercase, and 0 otherwise.
 *
 * Return: 1 if 'c' is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
