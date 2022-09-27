#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
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
	int k;
	
	i = 0;
	while (i < size)
	{
		diag1 += a[i];
		i++;
	}

	j = 0;
	k = 1;
	while (j < size)
	{
		diag2 += a[j];
		j++;
		k++;
	}
	
	_putchar(diag1);
	_putchar(',');
	_putchar(' ');
	_putchar(diag2);
}
