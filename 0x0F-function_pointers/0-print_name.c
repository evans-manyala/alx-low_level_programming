#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: pointer to a character array containing the name to be printed.
 * @f: pointer that takes a character pointer as an argument
 * for printing the name.
*/

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		f(name);
	}
}
