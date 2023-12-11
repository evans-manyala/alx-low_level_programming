#include "main.h"
/**
 * _putchar - Function prints character to standard output
 * @c: Character to be printed.
 * Return: Character put
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
