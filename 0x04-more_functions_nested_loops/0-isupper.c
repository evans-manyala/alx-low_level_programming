#include "main.h"
/**
 * _isupper - This function checks for the uppercase character.
 * @c: Character being tested to see if its uppercase.
 * Return: 1 is UPPERCASE else 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
