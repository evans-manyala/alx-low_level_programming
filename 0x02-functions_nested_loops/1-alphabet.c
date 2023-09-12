#include "main.h"
/**
 * print_alphabet - Prints lowercase alphabets, followed by a new line.
 * Description: This function prints the lowercase alphabet from 'a' to 'z' and
 * then outputs a newline character.
 * Return: On success (0), returns character written.
 */
void print_alphabet(void)
{
	char var;

	for (var = 'a'; var <= 'z' ; var++)
	{
		_putchar(var);
	}
	_putchar('\n');
}
