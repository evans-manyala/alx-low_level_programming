#include "main.h"
/**
 * more_numbers - prints 0 t0 14 on each line 10 times.
 * Return: Success (0).
 *
 *
 */

void more_numbers(void)
{
	int num, num2;

	for (num = 0; num < 10; num++)
	{
		for (num2 = 0; num2 <= 14; num2++)
		{
			if (num > 9)
			{
				_putchar((num2 / 10) + '0');
				_putchar((num2 % 10) + '0');
			}
		}

		_putchar('\n');
	}
}
