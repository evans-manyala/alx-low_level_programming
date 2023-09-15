#include "main.h"

/**
  * print_number - Prints an integer.
  * @n: The integer to prints.
  *
  * Return: Nothing!
  */
void print_number(int n)
{
	unsigned int x1;

	x1 = n;

	if (n < 0)
	{
		n = n * -1;
		x1 = n;
		_putchar('-');
	}

	x1 = x1 / 10;

	if (x1 != 0)
	{
		print_number(x1);
	}

	_putchar((unsigned int) n % 10 + '0');
}
