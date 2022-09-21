#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 *
 * @s: string to be encoded
 *
 * Return: New string
 */

char *leet(char *s)
{
	int arr1[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int arr2[11] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; arr1[j] != '\0'; j++)
		{
			if (s[i] == arr1[j])
				s[i] = arr2[j];
		}
	}
	return (s);
}
