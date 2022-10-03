#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2 dimensional grid previously created by alloc_grid
 *
 * @grid: pointer to array to be freed
 *
 * @height: height of array to be freed
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

