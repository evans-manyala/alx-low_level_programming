#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates 2 strings.
 * @s1: string 1
 * @s2: string 2
 * @n: Number of bytes to copy from string 2
 * Return: A pointer to a newly allocated space in memory for s1
 * followed by the n bytes of s2 and null-terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length, s2_length, sum_length;
	char *r;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_length = strlen(s1);
	s2_length = strlen(s2);

	if (n > s2_length)
	{
		n = s2_length;
	}

	sum_length = s1_length + n + 1;

	r = malloc(sum_length);

	if (r == NULL)
	{
		return (NULL);
	}

	memcpy(r, s1, s1_length);
	memcpy(r + s1_length, s2, n);

	r[sum_length - 1] = '\0';
	return (r);
}
