#include "main.h"
/**
 * print_binary - Function prints binary representation of a number
 * @n: number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}

	while (n > 0)
	{
		if (n & 1)
			_putchar('1');
		else
			_putchar('0');
		n >>= 1;
	}
}
