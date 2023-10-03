#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Function free an array grid created.
 * @grid: Address of the grid created;
 * @height: Height of the array grid.
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
