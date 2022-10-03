#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string to be concatenated to
 *
 * @s2: string to be concatenated
 *
 * Return: New concatenated string on success, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, a, b;

	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	str = malloc((i + j) * sizeof(char) + 1);

	if (str == NULL)
		return (NULL);

	for (a = 0, b = 0; a < (i + j + 1); a++)
	{
		if (a < i)
			str[a] = s1[a];
		else
			str[a] = s2[b++];
	}

	return (str);

}
