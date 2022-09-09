#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0
 *
 */

int main(void)
{
	int a, b, c, d;
	int i, j;

	for (i = 0; i < 100; i++)
	{
		a = i % 10;
		b = i / 10;
		for (j = 0; j < 100; j++)
		{
			c = j % 10;
			d = j / 10;

			if (b < d || (b == d && a < c))
			{
				putchar(b + '0');
				putchar(a + '0');
				putchar(' ');
				putchar(d + '0');
				putchar(c + '0');

				if (!(b == 9 && a == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
