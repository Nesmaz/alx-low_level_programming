#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional array of integers
 * @grid: pointer to the two dimensional array
 * @height: the height of the array
*/

void free_grid(int **grid, int height)
	{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
