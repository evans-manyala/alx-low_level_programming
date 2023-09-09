#include <stdio.h>
/**
 * main -  Starting block
 *
 * Return:  Success(0)
 */
int main(void) 
{
char x, y, z;
for (x = '0'; x <= '7'; x++)
{
for (y = x + 1; y <= '9'; y++)
{
z = y + 1;
putchar(x);
putchar(y);
putchar(z);
if (x == '7' && y == '8')
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
