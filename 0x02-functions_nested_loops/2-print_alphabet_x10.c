#include <stdlib.h>
#include "main.h"


/**
 * print_alphabet_x10 - prints alphabets followed by a new line 10 times
 *
 * Return: Void
 *
 */

void print_alphabet_x10(void)
{
	char character;
	int i = 0;

	while (i < 10)
	{
		character = 'a';

		while (character <= 'z')
		{
			_putchar(character);
			character++;
		}
		_putchar('\n');
		i++;
	}

}
