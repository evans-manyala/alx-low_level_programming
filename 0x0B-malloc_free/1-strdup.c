#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Function copies string.
 * @str: string to be copied.
 * Return: If string = NULL, return NULL,
 * else return new string copied.
 */
char *_strdup(char *str)
{
	char *new_str;
	size_t length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);

	new_str = (char *)malloc(length + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	memcpy(new_str, str,  length + 1);

	return (new_str);
}
