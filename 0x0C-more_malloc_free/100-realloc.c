#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 *
 * @old_size: size, in bytes, of the allocated space for ptr
 *
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to a new memory
 * If new_size == old_size do not do anything and return ptr
 * If new_size is equal to zero, and ptr is not NULL, return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
		char *p, *copy;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	copy = ptr;
	for (i = 0; i < old_size; i++)
		p[i] = copy[i];
	free(ptr);
	return (p);
}

