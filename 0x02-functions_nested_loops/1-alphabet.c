#include "main.h"
/**
 * print_alphabet - A function that prints the alphabets in lower case
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
