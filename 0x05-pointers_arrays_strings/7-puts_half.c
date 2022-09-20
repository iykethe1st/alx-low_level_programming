#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @str: str to be printed
 *
 * Return: Void
 */

void puts_half(char *str)
{
	int len;
	int i;

	for (len = 0; str[len] != '\0'; len++)
		;
	
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
			_putchar(str[i]);
	}
	else 
	{
		for (i = (len - 1) / 2; i < len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');

}
