#include "main.h"
#include <stdlib.h>

/**
 * print_square - prints a square, followed by a new line.
 *
 * @size - is the size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int row;
	int column;

	row = 0;

	if (size <= 0)
		_putchar('\n');

	while (row < size)
	{
		column = 0;

		while (column < size)
		{
			_putchar('#');
			column++;
		}
		_putchar('\n');
		row++;
	}

}
