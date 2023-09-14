#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers.
 * Return: Success (0).
 *
 *
 */
#include <stdio.h>

int main(void)
{
unsigned int f1 = 1, f2 = 2;
unsigned int n;
int i;
printf("1, 2, ");
for (i = 2; i < 96; i++)
{
n = f1 + f2;
printf("%u, ", n);
f1 = f2;
f2 = n;
}
n = f1 + f2;
printf("%u, %u\n", n, n + f2);
return (0);
}
