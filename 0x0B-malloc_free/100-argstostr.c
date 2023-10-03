#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - Function concatenates arguments into string.
 * @ac: - Number is arguments to be concatenated into a string.
 * @av: Memory address for the concatenated string of arguments.
 * Return: NULL if ac or av = 0, otherwise return the
 * concatented string.
 */
char *argstostr(int ac, char **av)
{
	int x;
	char *new_string;
	size_t pos, str_length;

	if (av == 0 || ac == 0)
	{
		return (NULL);
	}

	str_length = 0;

	for (x = 0; x < ac; x++)
	{
		str_length += strlen(av[x]) + 1;
	}

	new_string = (char *)malloc(str_length);

	if (new_string == NULL)
	{
		return (NULL);
	}

	pos = 0;

	for (x = 0; x < ac; x++)
	{
		strcpy(new_string + pos, av[x]);
		pos += strlen(av[x]);
		new_string[pos] = '\n';
		pos++;
	}

	new_string[pos + 1] = '\0';

	return (new_string);
}
