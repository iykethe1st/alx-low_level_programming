#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: argument count
 *
 * @argv: Pointer to array of arguments passed in
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
