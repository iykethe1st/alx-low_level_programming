#include <stdlib.h>
#include "main.h"

/**
 * _islower - checks if an alphabet is lower
 *
 * c - parameter to be passed in
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
