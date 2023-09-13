#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from 1 to 98.
 * @n: This represents all natural numbers.
 *
 *
 *
 */

void print_to_98(int n)
{

int i;

if (n <= 98)
{
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
}
else
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
}
printf("%d\n", i);
}

