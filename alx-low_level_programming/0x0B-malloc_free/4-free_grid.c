#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2d array
 * @grid: array to free
 * @height: height of array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
