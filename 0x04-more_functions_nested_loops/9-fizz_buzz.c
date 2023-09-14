#include <stdio.h>
/**
 * main - Program prints numbers and 'Fizz' to represent
 * multiples of 3 and 'FizzBuzz'for multiples of 5
 * for numbers between 1 and 100.
 * Return: Success (0).
 */
int main(void)
{
int x1;
for (x1 = 1; x1 <= 100; x1++)
{
if (x1 % 3 == 0 && x1 % 5 == 0)
{
printf(" FizzBuzz");
}
else if (x1 % 3 == 0)
{
printf(" Fizz");
}
else if (x1 % 5 == 0)
{
printf(" Buzz");
}
else
{
printf("%d", +x1);
}
}
printf("\n");
return (0);
}
