#include <stdio.h>
/**
 * main -  Starting block
 *
 * Return:  Success(0)
 */
int main(void)
{
char a2z = 'a';
while (a2z <= 'z')
{
if (a2z == 'q' || a2z == 'e')
{
a2z++;
continue;
}
putchar(a2z);
a2z++;
}
putchar('\n');
return(0);
}
