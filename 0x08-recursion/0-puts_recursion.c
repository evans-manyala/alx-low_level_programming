#include "main.h"
/**
 * _puts_recursion - Function prints a string followed by
 * a new line.
 * @s: string to be printed.
 * Return: value of the string being printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
	_putchar(*s);
}
