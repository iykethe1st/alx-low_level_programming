#include "main.h"

/**
 * print_most_numbers - print digit character
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char j;

	for (j = '0'; j <= '9'; j++)
	{
		if (!(j == '2' || j == '4'))
			_putchar(j);
	}	_putchar('\n');
}
