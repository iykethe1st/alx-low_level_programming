#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: input str
 *
 * Return: String, NULL on error
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int c;

	if (str == (NULL))
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	s = malloc(i * sizeof(*s) + 1);

	for (c = 0; c < i; c++)
		s[c] = str[c];

	s[c] = '\0';
	return (s);
	free(s);

}
