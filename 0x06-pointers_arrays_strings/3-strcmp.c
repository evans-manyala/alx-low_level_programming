#include "main.h"
/**
 * _strcmp - Compares two strings.
 * @s1: String 1 to be compared with String 2.
 * @s2: String 2 to be compared with String 1.
 * Return: When successful 0 otherwise 1.
 *
 */

int _strcmp(char *s1, char *s2)
{
	int x, y = 0;

	while (y == 0)
	{
		if ((*(s1 + x) == '\0') && (*(s2 + x) == '\0'))
			break;
		y = *(s1 + x) - *(s2 + x);
		x++;
	}

	return (y);
}
