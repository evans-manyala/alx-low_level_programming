#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: Always 0 (success)
 */
int main(void)
{
	int passwd[100];
	int x1, sum = 0, num;

	srand(time(NULL));

	for (x1 = 0; x1 < 100; x1++)
	{
		passwd[x1] = rand() % 78;
		sum += (passwd[x1] + '0');
		putchar(passwd[x1] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			num = 2772 - sum - '0';
			sum += num;
			putchar(num + '0');
			break;
		}
	}
	return (0);
}
