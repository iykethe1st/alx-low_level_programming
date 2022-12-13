#include "main.h"

/**
 * *_strncpy - function that copies a string.
 *
 * @src: string to be copied
 *
 * @dest: buffer to be copied to
 *
 * @n: byte size to be copied
 *
 * Return: Copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
