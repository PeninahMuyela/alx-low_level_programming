#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional array of integers
 * created in the previous alloc_grid function
 *
 * @grid: the 2-dimensional array of integers to be freed
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
