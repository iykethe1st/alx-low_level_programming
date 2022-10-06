#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: number of elements in array
 * @size: size in bytes
 *
 * Return: pointer to the allocated memory,
 * If nmemb or size is 0, return NULL
 * if malloc fails, return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		p[i] = 0;

	return (p);
}
