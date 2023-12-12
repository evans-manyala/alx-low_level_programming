#include "main.h"
/**
 * _strlen - Function calculates length of string.
 * @s: string to be tested.
 * Return: Length of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
