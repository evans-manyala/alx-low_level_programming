/**
 * main -  Starting block
 *
 * Return:  Success(0)
 */
int main(void)
{
int num = 0;
char hex = 'a';
while (num <=9)
{
putchar(num);
num++;
}
while (hex <='f')
{
putchar(hex);
hex++;
}
putchar('\n');
return(0);
}
