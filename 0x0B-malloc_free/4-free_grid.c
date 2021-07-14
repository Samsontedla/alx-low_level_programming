#include "holberton.h"
#include <stdlib.h>
/**
 *alloc_grid - function that returns a 2D array
 *@width: size of row
 *@height: size of column
 *Return: pointer to array
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
