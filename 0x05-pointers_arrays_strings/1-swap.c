#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: Integer to be swapped
 *
 * @b: integer to be swapped
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;

	*b = c;
}
