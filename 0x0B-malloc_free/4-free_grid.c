#include "holberton.h"
#include <stdlib.h>
/**
 *free_grid - function that frees a grid allocated by alloc_grid
 *@grid: 2D array
 *@height: size of column
 *Return: freed grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
