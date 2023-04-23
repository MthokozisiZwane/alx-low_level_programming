include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array created by alloc_grid function.
 * @grid: 2D grid
 * @height: height dimension of grid
 * Description: frees grid of memory
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
