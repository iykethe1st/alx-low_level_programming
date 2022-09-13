#include "main.h"
/**
 * main - Entry Point
 *
 * Description: You are not allowed to include standard libraries.
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
