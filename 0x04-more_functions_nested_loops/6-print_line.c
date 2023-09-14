#include "main.h"
/**
 * print_line - Draws a straightline on the terminal
 * @n: value determining the length of the line
 *
 *
 */

void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
