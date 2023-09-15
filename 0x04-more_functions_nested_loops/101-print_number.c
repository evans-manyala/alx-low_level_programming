
#include "main.h"
#include <stdlib.h>
/**
 * print_number - prints integers
 * @n: value parameter being passed
 *
 *
 *
 */

void print_number(int n)
{
	int is_negative = n < 0;

	n = abs(n);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n > 0)
	{
		int digit = n % 10;

		_putchar(digit + '0');
		n /= 10;
	}

	if (is_negative)
	{
		_putchar('-');
	}
}
