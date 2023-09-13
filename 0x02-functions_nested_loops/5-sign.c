#include "main.h"
/**
 * print_sign - Checks if a number is greater
 * or less than or equal to zero.
 * @n: is the character to check
 *
 * Description: This function checks if the input of the number
 * n.
 * It returns 1 if n > 0, or -1 if n < 0 or 0 if n = 0.
 *
 * Return: 1 if n > 0, or -1 if n < 0 or 0 if n = 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (-2);
}
