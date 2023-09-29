#include "main.h"
/**
 * _isdigit - Function that prints digits betwen 0 and 9
 * @c: Digit
 * Return: 1 if C is a digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
