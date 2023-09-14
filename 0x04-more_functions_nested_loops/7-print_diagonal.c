#include "main.h"
/**
 * print_diagonal - Prints a diagonal line.
 * @n: value determining the length of the line.
 *
 */
void print_diagonal(int n)
{
	int separator, length;

	for (length = 0; length < n; length++)
	{
		for (separator = 0; separator < length; separator++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (length < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
