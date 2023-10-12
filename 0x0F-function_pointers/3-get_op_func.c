#include "3-calc.h"

/**
 * get_op_func - Function allows you to chose which
 * mathematical operation you want to achieve
 * @s: Mathematical operation you want.
 *
 * Return: Pointer to the function.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[6] = {
		{"+", op_sum},
		{"-", op_minus},
		{"*", op_product},
		{"/", op_division},
		{"%", op_modulo},
		{NULL, NULL}
	};

	int x;

	for (x = 0; ops[x].op != NULL; x++)
	{
		if (strcmp(s, ops[x].op) == 0)
		{
			return (ops[x].c);
		}
	}

	return (NULL);
}
