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
	int i;

	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;

	return (ptr);
}
