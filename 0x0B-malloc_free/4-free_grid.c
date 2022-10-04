#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free a 2 dimensional grid previously created by your
 * alloc_grid function
 * @grid: The grid we free up
 * @height: The number of rows in the grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
