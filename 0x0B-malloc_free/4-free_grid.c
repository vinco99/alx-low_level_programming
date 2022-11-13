#include "main.h"

/**
 * free_grid - Frees the 2 dimentional grid
 * @grid: the grid
 * @height: height of grid
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
