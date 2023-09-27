#include "main.h"
/**
 * factorial - Function returnd the factorial of a number.
 * @n: number to which factorial is returned.
 * Return: value of the factorial is > '0' or  '0' is 1
 * otherwise '-1'.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
