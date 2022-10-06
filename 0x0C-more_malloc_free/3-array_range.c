#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: minimum range of integer
 *
 * @max: maximum range of integer
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int i, j, a;

	int *ptr;

	for (i = 0; i > min && i < max; i++)
		;
	ptr = malloc(i * sizeof(*ptr) + 1);

	for (a = 0, j = min; j < max; j++)
	{
		ptr[a] = j;
		a++;
	}
	ptr[a] = '\0';

	return (ptr);
}
