#include "main.h"
/**
 * _strspn - Function returns the length of the initial
 * substring of the string.
 * @s: Pointer to the initial substring.
 * @accept: Pointer to accepted value
 * Return: Length of the initial substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, found = 0;

	while (*s)
	{
		for (char *p = accept; *p; p++)
		{
			if (*s == *p)
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
