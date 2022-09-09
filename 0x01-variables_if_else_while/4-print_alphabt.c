#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * Return: 0
 *
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower == 'e' || lower == 'q')
			lower++;
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
