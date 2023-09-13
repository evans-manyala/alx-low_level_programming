#include <stdio.h>
/**
 * main - This script calculates sum of multiples of 3 and 5 below 1024
 * Return: success (0)
 */
int main(void)
{
	int n = 0;
	int sum = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
		n++;
	}

	printf("Sum is :%d\n",sum);
	return (0);
}


