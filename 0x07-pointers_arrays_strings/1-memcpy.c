#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: destination of the copied data
 *
 * @src: source of the copied data
 *
 * @n: number of bytes to be copied
 *
 * Return: a pointer to 'dest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		src[i] = dest[i];
		i++;
		n--;
	}
	return (dest);
}
