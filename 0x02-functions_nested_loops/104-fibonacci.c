#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers.
 * Return: Success (0).
 *
 *
 */
int main(void)
{
unsigned long i, prev = 1, curr = 2;

printf("%lu, %lu", prev, curr);

for (i = 2; i < 98; i++)
{
unsigned long next = prev + curr;
printf(", %lu", next);

prev = curr;
curr = next;
}

printf("\n");

return (0);
}
