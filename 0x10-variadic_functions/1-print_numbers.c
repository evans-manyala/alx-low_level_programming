#include "variadic_functions.h"

/**
 * print_numbers - Function prints numbers
 * followed by new line.
 * @separator: This is the string bewtween the numbers.
 * @n: intgers pushed into the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list ap;

	if (n == 0)
	{
		return;
	}

	va_start(ap, n);

	if (separator != NULL)
	{
		printf("%s", separator);
	}

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ap, int));

		if (x < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(ap);

	printf("\n");
}
