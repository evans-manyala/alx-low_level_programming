#include "main.h"
/**
 * print_most_numbers - prints numbers between 0 and 9
 * followed by a new line.
 * Return: 0 when successful.
 *
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar('0' + num);
		}
	}
	_putchar('\n');
}

