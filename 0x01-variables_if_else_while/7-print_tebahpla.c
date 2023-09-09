#include <stdio.h>
/**
 * main -  Starting block
 *
 * Return:  Success(0)
 */
int main(void)
{
char a2z = 'z';

while (a2z <= 'a')
{
putchar(a2z);
a2z--;
}
putchar('\n');
return (0);
}
