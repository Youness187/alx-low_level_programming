#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid previously
 * @grid: 2 dimensional array
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

