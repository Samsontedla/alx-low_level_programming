#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 *@min: first value of array
 *@max: last value of array
 *Return: pointer to new array if success, NULL if error
 */
int *array_range(int min, int max)
{
	int *a, i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	a = malloc(sizeof(int) * size);

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = min++;
	}
	return (a);
}
