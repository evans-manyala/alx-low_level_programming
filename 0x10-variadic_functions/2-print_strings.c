#include "variadic_functions.h"

/**
 * print_strings - Function prints strings separated by s seperator
 * followed by a new line.
 * @n: Number of strings to be printed
 * @separator: string that divides the string characters to be
 * separated followed by a new line.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;
	const char *str_ptr;

	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		str_ptr = va_arg(ap, const char *);

		if (str_ptr == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", str_ptr);
		}

		if (x < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(ap);

	printf("\n");
}
