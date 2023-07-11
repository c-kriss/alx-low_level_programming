#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2D array of integers.
 * @width: integer input variable
 * @height: integer input variable
 *
 * Return: grid on success and NULL on fail
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	else
	{
		int **grid = (int **)malloc(height * sizeof(int *));
		int i, j;

		if (grid == NULL)
		{
			return (NULL);
		}

	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}

		free(grid);
		return (NULL);

		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
	}
}
