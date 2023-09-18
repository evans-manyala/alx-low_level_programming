#include "main.h"
#include <stdio.h>
/**
 * print_array - function prints n elements of an array of integers,
 * followed by a new line.
 * @a: array element being parsed.
 * @n: number of elements being printed.
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
