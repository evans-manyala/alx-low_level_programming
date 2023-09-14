#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14; 10 times.
 *
 * Return: void.
 */

void more_numbers(void)
{
	int n, cnt;

	for (cnt = 0; cnt <= 9; cnt++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
