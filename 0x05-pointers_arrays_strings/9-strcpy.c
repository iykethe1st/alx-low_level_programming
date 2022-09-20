#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src
 *
 * @src: Pointer to copy string from
 *
 * @dest: pointer to copy string to
 *
 * return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
