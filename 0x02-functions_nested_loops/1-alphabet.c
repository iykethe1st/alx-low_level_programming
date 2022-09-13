#include <stdlib.h>
#include "headers.h"
/**
 * print_alphabet - A function that prints the alphabets in lower case followed by a new line
 *
 * Return: Void;
 *
 */

void print_alphabet(void)
{
	char character = 'a';
	
	while (character <= 'z')
	{
		_putchar(character);
		character++;
	}
	_putchar('\n');	
}
