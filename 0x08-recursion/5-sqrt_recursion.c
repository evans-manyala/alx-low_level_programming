#include "main.h"
/**
 * _sqrt_recursion - Prints the square root of a number.
 * @n: base number to calculate squareroot of.
 * @num1:  Current square root guess pattern.
 * Return: Square root of the number as long as its not equal to 0.
 */
int _sqrt_helper_function(int n, int num1);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper_function(n, 1));
	}
}

/**
 * _sqrt_helper_function - Function calculates the square root recusively.
 * @n: base number to calculate square root of.
 * @num1:  Current square root guess pattern.
 * Return: Square root of 'n'.
 */

int _sqrt_helper_function(int n, int num1)
{
	if (num1 * num1 == n)
	{
		return (num1);
	}
	else if (num1 * num1 > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper_function(n, num1 + 1));
	}
}
