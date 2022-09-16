#include "main.h"
#include <stdlib.h>

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int c;

	i = 0;

	while (n > 0)
	{	
		for (c = i; c > 0; c--)
			_putchar(' ');	
		_putchar('\\');
		_putchar('\n');
		i++;
		n--;
	}
	_putchar('\n');
}
