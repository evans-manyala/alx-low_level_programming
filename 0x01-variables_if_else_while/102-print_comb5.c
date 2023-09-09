#include <stdio.h>
/**
 * main - Starting block
 * Return: Success (0)
 */
int main(void)
{
int a = 0, b = 0;
while (a < 100)
{
b = 0;
while (b < 100)
{
if (a < b)
{
putchar((a / 10) + 48);
putchar((a % 10) + 48);
putchar(' ');
putchar((b / 10) + 48);
putchar((b % 10) + 48);
if (a != 98 || b != 99)
{
putchar(',');
putchar(' ');
}
}
b++;
}
a++;
}
putchar('\n');
return (0);
i}
