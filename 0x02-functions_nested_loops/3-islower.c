#include <stdlib.h>
#include "main.h"

/**
 * _islower - checks if an alphabet is lower
 * Description - The standard library provides a similar function: islower.
 * run man islower for more.
 *
 * @c - alphabet to be checked
 *
 * Return: 1 if c is lowercase, otherwise 0
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
