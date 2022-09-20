#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: string to reverse
 *
 * Return: Void
 */

void rev_string(char *s)
{
	char temp;

	int i;
	int l;
	int c;

	for (i = 0; s[i] != '\0'; i++)
		;

	l = i;

	for (c = 0; c < l / 2; c++)
	{
		temp = s[c];
		s[c] = s[l - c - 1];
		s[l - c - 1] = temp;
	}
}
