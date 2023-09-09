/**
 * main -  Starting block
 *
 * Return:  Success(0)
 */
int main(void)
{
	int num = 0;
	int hex;

	while (num < 10)
	{
		putchar(num);
		num++;
	}

	for (hex = 'a' ; hex <= 'f' ; hex++)
	{
		putchar(hex);
	}

	putchar('\n');
	return (0);
}
