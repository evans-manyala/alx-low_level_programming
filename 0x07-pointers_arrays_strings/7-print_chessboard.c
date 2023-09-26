#include "main.h"
/**
 * print_chessboard - Prints the chessboard.
 * @a: characters representing the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int x, y = 0;

	while (x < 64)
	{
		if (x % 8 == 0 && x != 0)
		{
			y = x;
			_putchar('\n');
		}
		_putchar(a[x / 8][x-y]);
		x++;
	}
	_putchar('\n');
}
