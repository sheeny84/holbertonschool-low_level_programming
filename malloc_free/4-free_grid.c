#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free a 2-dimensional grid
 * @grid: pointer to the 2D grid
 * @height: height of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
