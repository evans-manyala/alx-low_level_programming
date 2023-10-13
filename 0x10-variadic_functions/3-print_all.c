#include "variadic_functions.h"

/**
 * print_char - Print a character followed by a separator.
 * @c: The character to print.
 * @s: The separator to use before printing.
 */
void print_char(char c, const char *s)
{
	printf("%s%c", s, c);
}

/**
 * print_int - Print an integer followed by a separator.
 * @numeral: The integer to print.
 * @s: The separator to use before printing.
 */
void print_int(int numeral, const char *s)
{
	printf("%s%d", s, numeral);
}

/**
 * print_double - Print a double followed by a separator.
 * @f: The double to print.
 * @s: The separator to use before printing.
 */
void print_double(double f, const char *s)
{
	printf("%s%f", s, f);
}

/**
 * print_string - Print a string or "(nil)"
 * if it's NULL, followed by a separator.
 * @str_ptr: The string to print.
 * @s: The separator to use before printing.
 */
void print_string(char *str_ptr, const char *s)
{
	if (str_ptr == NULL)
		printf("%s(nil)", s);
	else
		printf("%s%s", s, str_ptr);
}

/**
 * print_all - Print values based on the format string and separators.
 * @format: The format string specifying the types of arguments to print.
 * Rest of the parameters are variable arguments based on the format.
 */
void print_all(const char *format, ...)
{
	va_list ap;
	const char *s = "";
	int x = 0;

	va_start(ap, format);

	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				print_char(va_arg(ap, int), s);
				break;
			case 'i':
				print_int(va_arg(ap, int), s);
				break;
			case 'f':
				print_double(va_arg(ap, double), s);
				break;
			case 's':
				print_string(va_arg(ap, char *), s);
				break;
		}

		s = ", ";
		x++;
	}

	va_end(ap);
	printf("\n");
}

