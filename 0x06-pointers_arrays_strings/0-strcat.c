#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 *
 * @src: String to be concatenated
 *
 * @dest: string to be concatenated to
 *
 * Return: Concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
