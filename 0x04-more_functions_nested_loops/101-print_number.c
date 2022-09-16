#include "main.h"

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	int x0, x1, x2, x3, x4, x5, x6, x7, x8, x9;
	int y0, y1, y2, y3, y4, y5, y6, y7, y8;

	x0 = n / 1000000000;
	y0 = x0;
	x1 = (n / 100000000) % 10;
	y1 = y0 + x1;
	x2 = (n / 10000000) % 10;
	y2 = y1 + x2;
	x3 = (n / 1000000) % 10;
	y3 = y2 + x3;
	x4 = (n / 100000) % 10;
	y4 = y3 + x4;
	x5 = (n / 10000) % 10;
	y5 = y4 + x5;
	x6 = (n / 1000) % 10;
	y6 = y5 + x6;
	x7 = (n / 100) % 10;
	y7 = y6 + x7;
	x8 = (n / 10) % 10;
	y8 = y7 + x8;
	x9 = n % 10;
	if (n < 0)
	{
		_putchar('-');
		x0 *= -1;
		x1 *= -1;
		x2 *= -1;
		x3 *= -1;
		x4 *= -1;
		x5 *= -1;
		x6 *= -1;
		x7 *= -1;
		x8 *= -1;
		x9 *= -1;
	}
	if (y0 != 0)
		_putchar('0' + x0);
	if (y1 != 0)
		_putchar('0' + x1);
	if (y2 != 0)
		_putchar('0' + x2);
	if (y3 != 0)
		_putchar('0' + x3);
	if (y4 != 0)
		_putchar('0' + x4);
	if (y5 != 0)
		_putchar('0' + x5);
	if (y6 != 0)
		_putchar('0' + x6);
	if (y7 != 0)
		_putchar('0' + x7);
	if (y8 != 0)
		_putchar('0' + x8);
	_putchar('0' + x9);
}

