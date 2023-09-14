#include "main.h"
/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int x1, x2;

		for (x1 = 0; x1 < size; x1++)
		{
			for (x2 = 0; x2 < size; x2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
