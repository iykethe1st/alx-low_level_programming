#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 *
 * @s: string to be encoded
 *
 * Return: New string
 */

char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (s[i] == 65 || s[i] == 97)
			s[i] = 52;
		while (s[i] == 69 || s[i] == 101)
			s[i] = 51;
		while (s[i] == 79 || s[i] == 111)
			s[i] = 48;
		while (s[i] == 84 || s[i] == 116)
			s[i] = 55;
		while (s[i] == 76 || s[i] == 108)
			s[i] = 49;
	}
	return (s);
}
