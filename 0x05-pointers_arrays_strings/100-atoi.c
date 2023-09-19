#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to be converted
 * Return: The integer value of the string, or 0 if no valid integer is found
 */
int _atoi(char *s)
{
	int x1 = 1;
	unsigned int sum = 0;
	char flag = 0;

	while (*s)
	{
		if (*s == '-')
		{
			flag *= -1;
		}
		if (*s >= '0' && *s <= '9')
		{
			flag = 1;
			sum = ((sum * 10) + *s) - '0';
		}
		else if (flag)
		{
			break;
			s++;
		}
		if (x1 < 0)
		{
			sum = (-sum);
		}
	}
	return (sum);
}
