#include "main.h"
#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 *
 * @argc: argument count passed in
 *
 * @argv: pointer to array of arguments passed in
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
