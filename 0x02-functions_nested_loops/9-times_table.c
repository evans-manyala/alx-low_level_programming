#include "main.h"
typedef int make_iso_compilers_happy;

/**
 * times_table - Prints the 9 times table starting with 0
 *
 *
 *
 *
 *
 *
 *
 */

void times_table(void)
{
	int num, num2, result;

	for (num = 0; num < 8; num++)
	{
		for (num2 = 0; num2 < 9; num2++)
		{
			result = num * num2;

			if (result < 10)
			{
				if (num2 > 0)
				{
					_putchar(' ');
					_putchar(result + '0');
				}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
			}
		}
	}
}
