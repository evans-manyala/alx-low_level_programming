#include <stdio.h>
/**
 * fibonacci - calculates fibonnacci sequence
 * main - Calculate sum of the first 50 fibonacci sequence.
 * @x: fibonacci numbers.
 * return: sum of fibonnaci sequence.
 */

int fibonacci(int x)
{
	if (x == 0)
	{
		return (0);
	}
	else if (x == 1)
	{
		return (1);
	}
	else
	{
		return (fibonacci(x - 1) + fibonacci(x - 2));
	}
}

int main(void)
{
	int y, n;
	int f1 = 0, f2 = 1;

	printf("The first 50 Fibonacci numbers are: ");

	for (i = 0; i < 50; i++)
	{
		n = f1 + f2;
		printf("%d, ", n);
		f1 = f2;
		f2 = n;
	}

	printf("\n");

	return (0);
}
