#include "main.h"
/**
 * print_diagonal - Prints a diagonal line.
 * @n: value determining the length of the line.
 *
 */
void print_diagonal(int n)
{
	int separator, length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (separator = 0; separator < length; separator++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			length = n - 1;

			if (length)
			{
				continue;
			}

			_putchar('\n');
		}
	}

	_putchar('\n');
}
