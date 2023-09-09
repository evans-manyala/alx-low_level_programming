/**
 * main -  Starting block
 *
 * Return:  Success(0)
 */
int main(void)
{
int num1 = 0;
int num2;

while (num1 <= 9)
{
putchar('0' + num1);
num1++;
}
while ( num2 <= 'f')
{
putchar(num2);
num2++;
}
putchar('\n');
return (0);
}
