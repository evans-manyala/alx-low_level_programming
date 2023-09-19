#include "main.h"
#include <limits.h>
/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to be converted
 * Return: The integer value of the string, or 0 if no valid integer is found
 */
int _atoi(char *s)
{
	int sign = 1, digit, result = 0;

	while (*s != '\0')
	{
		if (*s == ' ')
		{
			s++;
			continue;
		}
		if (*s == '-' || *s == '+')
		{
			if (*s == '-')
			{
				sign *= -1;
			}
			s++;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = 1;

			if (result > (INT_MAX - (*s - '0')) / 10)
			{
				return ((sign == 1) ? INT_MAX : INT_MIN);
			}
			result = result * 10 + (*s - '0');
		}
		else
		{
			break;
		}
		s++;
	}
	if (!digit)
	{
		return (0);
	}
	return (sign * result);
}
