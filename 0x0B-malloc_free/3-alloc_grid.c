#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - 2 dimentional arrays to integers
 * @width: 2 dimention array
 * @height: 2 dimention array
 * Return: Always success 0.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 2 || height <= 2)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
