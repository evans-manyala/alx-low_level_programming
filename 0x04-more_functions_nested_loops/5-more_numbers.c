#include "main.h"
/**
 * more_numbers - prints ten times on a new line
 * the numbers 0 to 14.
 * Return: Success (0).
 *
 *
 */

void more_numbers(void)
{
	int num, num2;

	for (num = 0; num < 10; num++)
	{
		for (num2 = 0; num2 < 15; num2++)
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
