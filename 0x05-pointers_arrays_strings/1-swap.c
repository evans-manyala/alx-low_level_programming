#include "main.h"
/**
 * swap_int - Swaps values of 2 integers.
 * @a: first integer to be swapped.
 * @b: second integer to be swapped.
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
