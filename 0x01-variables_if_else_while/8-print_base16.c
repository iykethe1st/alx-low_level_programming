#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0
 *
 */

int main(void)
{
    int digit;
    char alphabet;

    for(digit = 0; digit < 10; digit++)
    {
	putchar(digit + '0');
    }
    for(alphabet = 'a'; alphabet < 'g'; alphabet++)
    {
        putchar(alphabet);
    }
    putchar('\n');
    return (0);
}
