#include <stdio.h>

/**
 * main - Entry point for a program that prints hexadecimal numbers from 0 to F
 *
 * Description: This program prints hexadecimal numbers from 0 to F
 * (equivalent to 0-15 in decimal) in lowercase, separated by commas
 * and spaces, and then ends with a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char hex[] = "0123456789abcdef"; // Array of hexadecimal digits
    int i;

    for (i = 0; i < 16; i++)
    {
        putchar(hex[i]);

        if (i != 15)
        {
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');
    return (0);
}
