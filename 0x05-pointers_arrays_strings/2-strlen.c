#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s: length of the string.
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
