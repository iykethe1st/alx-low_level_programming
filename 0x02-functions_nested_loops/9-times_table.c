#include <stdlib.h>
#include "main.h"

/**
 * times_table - function prints the 9 times table
 *
 * Return: 9 times table
 */

void times_table(void)
{
	int row;   /* Row */
	int column; /* Column */
	int product; /* Product - computed value */

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			product = row * column;

			if (product < 10)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product > 9)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			if (column != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
