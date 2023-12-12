#include "main.h"
/**
 * _puts - Function writes string to the standard output.
 * @s: String to the written.
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
