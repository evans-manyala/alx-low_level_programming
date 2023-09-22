#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}

	if (n / 10 != 0)
	{
		print_number(x / 10);
	}

	_putchar('0' + (x % 10));
}
