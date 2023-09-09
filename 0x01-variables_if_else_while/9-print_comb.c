#include <stdio.h>

/**
 * main - Starting block
 * Description: Prints single digits separated by a comma and a space.
 * Return: Success(0)
 */
int main(void)
{
    for (int x = 0; x < 10; x++)
    {
        putchar('0' + x);

        if (x < 9)
        {
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');
    return (0);
}
