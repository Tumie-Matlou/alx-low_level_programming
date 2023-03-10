#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to 2D array of ints
 * @width: the row size
 * @height: the column size
 *
 * Return: 2D array of ints
 * NULL if failure or height/width are 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0) /* validate input */
		return (NULL);

	grid = malloc(height * sizeof(int *)); /*allocate memory for rows*/

	if (grid == NULL) /* validate memory */
		return (NULL);

	for (i = 0; i < height; i++) /*allocate memory for columns of each row*/
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL) /* validate memory */
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++) /* set array values to 0 */
			grid[i][j] = 0;
	}

	return (grid);
}
