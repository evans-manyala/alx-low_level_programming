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
	int yield = 1, rslt = 0, x1 = 0;

	while (s[x1] == ' ')
	{
		x1++;
	}
	if (s[x1] == '-')
	{
		yield -= 1;
		x1++;
	}
	else if (s[x1] == '+')
	{
		x1++;
	}

	while (s[x1] >= '0' && s[x1] <= '9')
	{
		if (rslt > (INT_MAX - (s[x1] - '0')) / 10)
		{
			return ((yield == 1) ? INT_MAX : INT_MIN);
		}

		rslt = rslt * 10 + (s[x1] - '0');

		x1++;
	}

	return (yield * rslt);
}
