#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2 dimensional grid.
 * @grid: pointer to int input variable
 * @height: integer input variable
 *
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}

	free(grid);

	}
}
