#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of the array
 *
 * @height: height of the array
 *
 * Return: Pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **grid;

	int i, j;

	if (width * height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid[i]);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);

}
