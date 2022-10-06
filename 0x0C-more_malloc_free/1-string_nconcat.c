#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string to concatenate to
 * @s2: string to concatenate
 * @n: number of bytes to be concatenated
 *
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, a, b;

	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	if (n >= strlen(s2))
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
		n = j;
		result = malloc((i * sizeof(*s1)) + (n * sizeof(*s2)) + 1);
	}
	else
		result = malloc((i * sizeof(*s1)) + (n * sizeof(*s2)) + 1);

	if (result == NULL)
		return (NULL);

	for (a = 0, b = 0; a < (i + n + 1); a++)
	{
		if (a < i)
			result[a] = s1[a];
		else
			result[a] = s2[b++];
	}
	result[a] = '\0';

	return (result);
}
