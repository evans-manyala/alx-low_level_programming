#include "main.h"
/**
 * print_alphabet_x10 - Prints lowercase alphabets ten times.
 * Description: This function prints the lowercase alphabet from 'a' to 'z' and
 * then outputs a newline character.
 * Return: On success (0), returns character written.
 */
void print_alphabet_x10(void)
{
	char var;
	int num;

	for (num = 1 ; num <= 10 ; num++)
	{
		for (var = 'a' ; var <= 'z' ; var++)
		{
			_putchar(var);
		}
		_putchar('\n');
	}
}
