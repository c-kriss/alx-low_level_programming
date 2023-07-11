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
	int i, j;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}

	free(grid);

		}
	}
}
