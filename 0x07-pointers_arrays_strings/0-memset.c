#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: Pointer to memory area
 *
 * @b: constant to be filled in
 *
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
