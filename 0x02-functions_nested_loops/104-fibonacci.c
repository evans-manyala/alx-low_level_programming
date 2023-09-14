#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers.
 * Return: Success (0).
 *
 *
 */
int main(void)
{
unsigned long int f1 = 1, f2 = 1, n;
int i;
printf("1, 1, ");

for (i = 2; i < 96; i++)
{
n = f1 + f2;
printf("%lu, ", n);
f1 = f2;
f2 = n;
}
n = f1 + f2;
printf("%lu, %lu\n", n, n + f2);
return (0);
}

