#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees memory alloc to previous grid
 * @grid: pointer to 2D array 
 * @height: column size
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
