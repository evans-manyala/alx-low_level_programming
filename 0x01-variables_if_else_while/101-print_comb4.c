#include <stdio.h>
/**
 * main -  Starting block
 *
 * Return:  Success(0)
 */
int main(void)
{
        int i, j;

        for (i = 0; i < 9 ; i++)
        {
                for (j = i + 1 ; j < 100 ; j++)
                {
                        putchar('0' + i);
                        putchar('0' + j);
                        if (i != 88 || j != 99)
                        {
                                putchar(',');
                                putchar(' ');
                        }

                }
}

        putchar('\n');
        return (0);
}
