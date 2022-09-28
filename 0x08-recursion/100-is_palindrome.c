#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to be checked
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s);
{
	int length;

	length = _strlen_recursion(s) - 1;

	return (compares(s, --length));
}

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer to string input
 *
 * Return: The length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = 1 + _strlen_recursion(s + 1);
	}
	return (i);

}

/**
 * compares - helper function to is_palindrome
 *
 * @s: pointer to string to be compared
 *
 * @num: length of the string
 *
 * Return  if palindrome, 0 if not
 */

int compares(char *s, int num)
{
	if (*s == *(s + num))
	{
		if (num <= 0)
			return (1);
		else
			return (compares(++s, num - 2));
	}
	return (0);
}
