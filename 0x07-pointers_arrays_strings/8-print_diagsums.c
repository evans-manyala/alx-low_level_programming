#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square
 * matrices of integers.
 * @a: Pointer to the array containinng the square matrix.
 * @size: The sizer of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	unsigned int pri_sum, sec_sum = 0;
	int x;

	while (x < size)
	{
		pri_sum += a[(x * size) + x];
		sec_sum += a[size - x - 1];
		x++;
	}

	printf("%d, %d\n", pri_sum, sec_sum);

}
