#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string pointer
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int result;

	for (result = 0; s[result] != '\0'; result++)
		;
	return (result);
}
