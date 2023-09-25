#include <string.h>
#include "main.h"
/**
 * infinite_add - Adds two numbers.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The result buffer.
 * @size_r: The size of the result buffer.
 * Return: A pointer to the result buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry_over, z = 0;
	int x, y, num1 , num2, sum;

	x = strlen(n1) - 1;
	y = strlen(n2) - 1;

	memset(r, '0', size_r);
	r[size_r - 1] = '\0';

	while (x >= 0 || y >= 0 || carry_over > 0)
	{
		if (z >= size_r - 1)
		{
			return (NULL);
		}

		num1 = (x >= 0) ? n1[x] - '0' : 0;
		num2 = (y >= 0) ? n2[y] - '0' : 0;
		sum = num1 + num2 + carry_over;

		carry_over = sum / 10;
		r[z] = (sum % 10) + '0';
		x--;
		y--;
		z++;
	}

	reverse_string(r, z);
	return (r);
}
void reverse_string(char *str, int len)
{
	int start = 0;
	int end = len - 1;

	while (start < end)
	{
		char temp = str[start];

		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}
