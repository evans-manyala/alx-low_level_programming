#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	int div = 1;
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	while (num / div >= 10)
	{
		div *= 10;
	}

	while (div != 0)
	{
		_putchar((num / div) + '0');
		num %= div;
		div /= 10;
	}
}
