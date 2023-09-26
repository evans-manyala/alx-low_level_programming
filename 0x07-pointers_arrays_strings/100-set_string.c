#include <stddef.h>
/**
 * set_string - function sets the value of a pointer to a char.
 * @s: pointer to a pointer to char value.
 * @to: pointer to the string value that the pointer 's'
 * should point to.
 */

void set_string(char **s, char *to)
{
	*s = to;
}

