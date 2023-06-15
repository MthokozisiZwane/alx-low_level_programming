#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array created by alloc_grid.c
 * @grid: 2d grid
 * @height: height of the grid
 * Description: frees memory of grid
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

