#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - how to free 2d array always
 * @grid: The 2d grid
 * @height: The height dimension of grid to be found
 * Description: How to free memory of grid
 * Return: nothing to loose
 *
 */
void free_grid(int **grid, int height)
{
	int b;

	for (b = 0; b < height; b++)
	{
		free(grid[b]);
	}
	free(grid);
}
