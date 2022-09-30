#include "main.h"

/**
 * *_strncat - concatenates two strings
 *
 * @src: string to be concatenated
 *
 * @dest: string to be concatenated to
 *
 * @n: number of bytes to be concatenated
 *
 * Return: New concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; n > 0 && src[j] != '\0'; j++, n--, i++)
		dest[i] = src[j];

	return (dest);
}
