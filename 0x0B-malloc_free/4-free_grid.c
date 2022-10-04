#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid.
 * @grid: multidimensional array of integers
 * @height: height of the grid
 *
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
