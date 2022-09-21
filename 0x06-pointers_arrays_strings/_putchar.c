#include <unistd.h>

/**
 * _putchar - prints a character to the stdout
 *
 * @c: character to be printed out
 *
 * Return: on Success 1, otherwise -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
