#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory
 * @b: size of memory
 * Return: pointer to allocated memory or 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
