#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: Point variable to be parsed.
 * Return: results of the conversion.
 */

int _atoi(char *s)
{
	int rslt = 0, x1 = 0;
	int sgn = 1;

	while (s[x1] == ' ')
	{
		x1++;
	}

	if (s[x1] == '-' || s[x1] == '+')
	{
		sgn = -1;

		if (s[x1] == '-')
		{
			x1++;
		}

		else
		{
			sgn = 1;
		}
	}

	while (s[x1] >= '0' && s[x1] <= '9')
	{
		rslt = rslt * 10 + (s[x1] - '0');
		x1++;
	}

	return (rslt * sgn);
}
