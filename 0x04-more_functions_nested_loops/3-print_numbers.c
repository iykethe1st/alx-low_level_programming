#include "main.h"
#include <stdlib.h>

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: void
 */

void print_numbers(void)
{
	char j;

	for (j = '0'; j <= '9'; j++)
	{
		_putchar(j);

	}
	_putchar('\n');
}
