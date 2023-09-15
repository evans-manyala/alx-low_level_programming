#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int x1 = n;

	if (n < 0)
	{
		_putchar('-');
		x1 = n * -1;
	}

	if (x1 > 9)
		print_number(x1 / 10);
	_putchar(x1 % 10 + '0');
}
