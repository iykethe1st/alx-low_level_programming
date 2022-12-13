#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 *
 * @haystack: string to search
 *
 * @needle: string to be searched for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int x;

	i = 0;
	x = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		while ((needle[j + x] != '\0')
			&& (haystack[i + x] != '\0')
			&& (needle[j + x] == haystack[i + x]))
		{
			if (haystack[i + x] != needle[j + x])
				break;
			x++;
		}
		if (needle[j + x] == '\0')
			return (&haystack[i]);
		j++;
		i++;
	}

	return (NULL);
}
