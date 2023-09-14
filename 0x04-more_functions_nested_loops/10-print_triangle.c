#include "main.h"
/**
 * print_triangle - Prints a triangle.
 * @size: size of the triangle.
 * Return: void.
 */

void print_triangle(int size)
{
	int x1, x2;

	for (x1 = 0; x1 < size; x1++)
	{
		for (x2 = 1; x2 < (size - x1); x2++)
			_putchar(' ');
		for (x2--; x2 < size; x2++)
			_putchar(35);
		if (x1 < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
