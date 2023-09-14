#include "main.h"
#include <stdio.h>

/**
 * mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: 0 when success
 */
int mul(int a, int b)
{
	int product;

	product = a * b;

	printf("%d", product);

	return (0);
}
