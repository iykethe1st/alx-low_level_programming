#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0;
 *
 *
 */


int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 1000; a++)
	{
		b = a % 10;
		c = (a / 10) % 10;
		d = a / 100;

		if (d < c && c < b)
		{
			putchar(d + '0');
			putchar(c + '0');
			putchar(b + '0');

			if (a != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
