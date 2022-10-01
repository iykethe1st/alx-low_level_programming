#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers.
 *
 * @argc: argument count
 *
 * @argv: point to arrat that holds arguments
 *
 * Return: Sum, Error on error
 */

int main(int argc, char *argv[])
{
	int total, i;
	char *p;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
