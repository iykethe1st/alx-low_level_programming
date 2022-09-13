#include <stdlib.h>
#include "headers.h"
/**
 * _putchar - prints the character '_putchar' to stdout
 *
 * main - Entry Point
 *
 * Return: on success 1
 *
 * on error: -1
 *
 */

int main(void)
{
	char val[] = "_putchar";
	int i = 0;

	while (val[i] != '\0')
	{
		_putchar(val[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
