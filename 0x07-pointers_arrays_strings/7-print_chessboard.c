#include "main.h"
/**
 * print_chessboard - Prints the chessboard.
 * @a: characters representing the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int x, y = 0;

	while (x < 8)
	{
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}

		_putchar('\n');
		x++;
	}
}
