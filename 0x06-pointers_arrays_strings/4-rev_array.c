#include "main.h"
/**
 * reverse_array - Reverses an array of integers
 * @a: Array itself.
 * @n: Integer value to denote the indexes.
 *
 *
 */
void reverse_array(int *a, int n)
{
	int x, y, z;

	for (x = 0, y = n - 1; x < y; x++, y--)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;
	}
}
