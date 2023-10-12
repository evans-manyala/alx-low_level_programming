#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: number of its parameters.
 *
 * Return: sum otherwise if n = 0, then 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;
	int sum;
	
	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
