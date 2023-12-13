#include "main.h"
/**
 * _putchar - Function append characters to the standard
 * output.
 * @c: Character to be written to standard output.
 * Return: Character to stdout.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
