#include <stdio.h>
/**
 * main - Calculates the fibonacci sequence
 * Return: success (0)
 *
 */
int main(void)
{
int n = 50;
unsigned long long fib[n];
fib[0] = 1;
fib[1] = 2;

for (int i = 2; i < n; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}
for (int i = 0; i < n - 1; i++)
{
printf("%llu, ", fib[i]);
}
printf("%llu\n", fib[n - 1]);
return (0);
}
