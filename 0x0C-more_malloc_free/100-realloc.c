#include "holberton.h"
#include <stdlib.h>
/**
 *_realloc - function that reallocates a memory block
 *@ptr: pointer to the memory previously allocated with a call to malloc
 *@old_size: is the size, in bytes, of the allocated space for ptr
 *@new_size: is the new size, in bytes of the new memory block
 *Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		s = malloc(new_size);

		if (s == NULL)
		{
			return (NULL);
		}
		return (s);
	}
	else
	{	
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	s = malloc(new_size);

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		s[i] = ((char*) ptr)[i];
	}
	free(ptr);
	return (s);
}
