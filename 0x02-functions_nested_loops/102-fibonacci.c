#include <stdio.h>
/**
 * main - Calculates the fibonacci sequence
 * Return: success (0)
 *
 */
int main(void)
{
int n = 50, i;
unsigned long fib[50];
fib[0] = 1;
fib[1] = 2;

for (i = 2; i < n; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}
for (i = 0; i < n - 1; i++)
{
printf("%lu, ", fib[i]);
}
printf("%lu\n", fib[n - 1]);
return (0);
}
