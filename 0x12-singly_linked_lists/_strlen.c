#include <string.h>

/**
 * _strlen - Function returns string length
 * @str: string pointer
 * Return: length of string.
 */
int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}
