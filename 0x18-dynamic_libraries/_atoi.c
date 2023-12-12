#include "main.h"
/**
 * _atoi  - Function returns the converted integral number as an int value.
 * @s: String to be converted.
 * Return: converted integer value
 */
int _atoi(char *s)
{
	int num = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;

		while (*s && _isdigit(*s))
		{
			num = 10 * num + (*s - '0');
			s++;
		}
	}
	return (num * sign);
}
