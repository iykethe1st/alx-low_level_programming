#include <unistd.h>

/**
 * _putchar - prints a character
 *
 * @c: character to be printed
 *
 * Return: 0n success 1
 * 0n error, -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
