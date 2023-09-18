#include "main.h"
#include <limits.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converteded.
 * Return: Intger value of the string or 0 if
 * no valid string is present.
 */

int _atoi(char *s)
{
	int x1, z1 = 0;
	unsigned int xy = 0;
	int y1 = 1;

	while (s[x1])
	{
		if (s[x1] == 45)
		{
			y1 *= -1;
		}

		while (s[x1] >= 48 && s[x1] <= 57)
		{
			z1 = 1;
			xy = (xy * 10) + (s[x1] - '0');
			x1++;
		}

		if (z1 == 1)
		{
			break;
		}

		x1++;
	}

	xy *= y1;
	return (xy);
}
