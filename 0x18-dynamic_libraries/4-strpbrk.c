#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string to be searched
 *
 * @accept: characters to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *result;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				result = &s[i];
				return (result);
			}
			j++;
		}
		i++;
	}
	return (0);
}
