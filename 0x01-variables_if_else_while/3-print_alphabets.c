#include <stdio.h>
/**
 * main -  Starting block
 *
 * Return:  Success(0)
 */
int main(void)
{
char a2z = 'a';
char z2a = 'A';
while (a2z <= 'z')
{
putchar(a2z);
a2z++;
}
while (z2a <= 'Z')
{
putchar(z2a);
z2a++;
}
putchar('\n');
return (0);
}
