#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 *
 * @argc: arguments count
 *
 * @argv: pointer to array that holds arguments
 *
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
