#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers.
 * Return: Success (0).
 *
 *
 */
int main(void)
{
int i;
int prev = 1;
int curr = 2;

printf("%d, %d", prev, curr);

for (i = 2; i < 98; i++)
{
int next = prev + curr;
printf(", %d", next);

prev = curr;
curr = next;
}

printf("\n");

return (0);
}
