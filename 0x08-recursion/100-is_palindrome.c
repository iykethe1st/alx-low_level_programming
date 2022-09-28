/**
 * is_palindrome - check if a string is a palindrome
 * @s: char array string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
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
 * compares - recursive check of palindrome
 * @s: string
 * @l: length of string
 * Return: 1 if palindrome, 0 if not
 */

int compares(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (compares(++s, l - 2));
	}
	else
		return (0);
}
