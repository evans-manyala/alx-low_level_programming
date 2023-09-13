#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int num, num2, result;

	for (num = 0; num < 10; num++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			result = num * num2;
			if (num2 == 0)
			{
				_putchar(result + '0');
			}

			if (result < 10 && num2 != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			} else if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
