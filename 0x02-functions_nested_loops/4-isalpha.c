#include <stdlib.h>
#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 *
 * @c: character to be checked
 *
 * Return: 1 if c is lowercase or uppercase, otherwise 0
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
