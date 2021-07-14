#include "holberton.h"
#include <stdlib.h>
/**
 *alloc_grid - function that returns a 2D array
 *@width: size of row
 *@height: size of column
 *Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(4 * height);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(4 * width);
		if (a[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);

}
