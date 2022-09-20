#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: Pointer to the array
 *
 * @n: number of elements to be printed
 *
 * Return: Void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);

		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
