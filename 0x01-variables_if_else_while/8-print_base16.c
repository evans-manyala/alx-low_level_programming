/**
 * main -  Starting block
 *
 * Return:  Success(0)
 */
int main(void)
{
	int num = 0;
	int hex = 'a';

	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}

	while (hex <='f')
	{
		putchar(hex);
		hex++;
	}

	putchar('\n');
	return (0);
}
