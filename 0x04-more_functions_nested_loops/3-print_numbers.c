#include "main.h"
/**
 * print_numbers - prints numbers between 0 and 9
 * followed by a new line.
 * Return: 0 when successful.
 *
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
