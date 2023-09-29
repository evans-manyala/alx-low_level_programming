#include "main.h"
#include <limits.h>
/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to be converted
 * Return: The integer value of the string, or 0 if no valid integer is found
 */
int _atoi(char *s)
{
	int rslt = 0;
	int x1 = 0;
	int sgn = 1;
	int final_digit = 0;

	while (s[x1] == ' ')
	{
		x1++;
	}

	while (s[x1] == '-' || s[x1] == '+')
	{
		sgn *= (s[x1] == '-') ? -1 : 1;
		x1++;

		while (s[x1] == '-' || s[x1] == '+')
		{
			x1++;
		}
	}

	while (s[x1] >= '0' && s[x1] <= '9')
	{
		final_digit = 1;

		if (rslt > (INT_MAX - (s[x1] - '0')) / 10)
		{
			return ((sgn == 1) ? INT_MAX : INT_MIN);
		}

		rslt = rslt * 10 + (s[x1] - '0');
		x1++;
	}

	if (!final_digit)
	{
		return (0);
	}

	return (rslt * sgn);
}
