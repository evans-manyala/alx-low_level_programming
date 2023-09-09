#include <stdio.h>
/**
 * main -  Starting block
 *
 * Return:  Success(0)
 */
int main(void)
{
char a2z;
for (a2z = 'a'; a2z ='z'; a2z++)
{
if (a2z != 'q' || 'e')
{
putchar(a2z);
}
}
putchar('\n');
return (0);
}
