#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - function that creates an array of chars
 *@size: size of array
 *@c: char
 *Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char  *j;

	j = malloc(1 * size);

	for (i = 0; i < size; i++)
	{
		j[i] = c;
	}
		return (j);
	if (j == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (0);
}
