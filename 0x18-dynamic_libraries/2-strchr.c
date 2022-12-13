#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string
 *
 * @c: character
 *
 * Return: pointer to the first occurrence of the character c in 's'
 * or NULL if the character is not found
 *
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
