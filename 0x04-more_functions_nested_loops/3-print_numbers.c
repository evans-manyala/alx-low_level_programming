#include "main.h"

/**
 * print_numbers - prints numbers between 0 and 9 followed by a new line
 *
 *
 *
 */
void print_numbers(void)
{
	int num;

	while (num <= 9)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
