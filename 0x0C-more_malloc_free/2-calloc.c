#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: size of array
 * @size: size of bytes
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	c = s;
	for (i = 0 ; i < (size * nmemb); i++)
	{
		c[i] = 0;
	}
	return (s);
}
