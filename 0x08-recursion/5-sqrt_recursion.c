#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n : input number
 *
 * Return: Natural square root, or -1 if none
 */

int _sqrt_recursion(int n)
{
	return (helperf(n, 1));
}

/**
 * helperf - helper function to _sqrt_recursion
 *
 * @c: number to determine square root
 *
 * @i: incrementer for comparison
 *
 * Return: Natural square root, or -1 if none
 */

int helperf(int c, int i)
{
	int square;

	square = i * i;

	if (square == c)
		return (i);
	else if (square < c)
		return (helperf(c, i + 1));
	else
		return (-1);
}
