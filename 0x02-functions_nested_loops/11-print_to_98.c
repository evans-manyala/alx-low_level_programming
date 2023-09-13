#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from 1 to 98.
 * @n: This represents all natural numbers.
 *
 *
 *
 */
void print_to_98(int n)
{
	int x = n;

	if (n <= 98)
	{
		while (x <= 98)
		{
			printf("%d", x);

			if (x != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
			x++;
		}
	}
	else
	{
		while (x >= 98)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(". ");
			}
			else
			{
				printf("\n");
			}
			x--;
		}
	}
}
