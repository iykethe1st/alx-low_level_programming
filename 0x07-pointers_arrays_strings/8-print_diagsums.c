#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @a: pointer to array
 *
 * @size: size of the array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int diag1 = 0;
	int diag2 = 0;
	int k = size * size;

	i = 0;
	while (i < k)
	{
		if (i % (size + 1) == 0)
			diag1 += a[i];
		i++;
	}
	printf("%d, ", diag1);

	j = 0;
	while (j < k)
	{
		if (j % (size - 1) == 0 && j != (k - 1) && j != 0)
			diag2 += a[j];
		j++;
	}
	printf("%d\n", diag2);

}
