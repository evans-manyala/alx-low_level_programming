#include "main.h"
#include <limits.h>
/**
 * _atoi - convert a string to an integer.
 * @s: Point variable to be parsed.
 * Return: results of the conversion.
 */
int _atoi(char *s)
{
	int rslt = 0;
	int x1 = 0;
	int sgn = 1;
	
	while (s[x1] == ' ')
	{
		x1++;
	}
	if (s[x1] == '-' || s[x1] == '+')
	{
		sgn = (s[x1] == '-') ? -1 : 1;
		x1++;
	}

	while (s[x1] >= '0' && s[x1] <= '9')
	{
		if (rslt > (INT_MAX - (s[x1] - '0')) / 10)
		{
			return ((sgn == 1) ? INT_MAX : INT_MIN);
		}

		rslt = rslt * 10 + (s[x1] - '0');
		x1++;
	}
	return (rslt * sgn);
}

