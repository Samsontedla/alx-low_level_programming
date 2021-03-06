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
	char *s;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (index = 0 ; index < (size * nmemb); index++)
	{
		s[index] = 0;
	}
	return (s);
}
