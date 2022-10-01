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
 * Return: 0 on success, Error on failure
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (!(argv[1] && argv[2]))
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
