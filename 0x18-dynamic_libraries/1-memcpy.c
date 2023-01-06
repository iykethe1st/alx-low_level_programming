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
	char *result;

	result = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (result);
}
