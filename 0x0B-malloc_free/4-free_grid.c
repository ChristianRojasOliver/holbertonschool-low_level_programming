#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - 2 dimensional grid
 * @grid: parameter
 * @height: parameter
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
}
