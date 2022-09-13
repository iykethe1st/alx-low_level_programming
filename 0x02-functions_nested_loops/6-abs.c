#include <stdlib.h>
#include "main.h"

/**
 * _abs - prints the absoluve value of a number
 *
 * Return: n;
 *
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
