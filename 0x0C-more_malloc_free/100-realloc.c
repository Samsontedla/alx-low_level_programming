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
	void *s;
	char *ptr_copy, *filler;
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
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	s = malloc(sizeof(*ptr_copy) * new_size);

	if (s == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = s;

	for (i = 0; i < old_size && i < new_size; i++)
	{
		filler[i] = *ptr_copy++;
	}
	free(ptr);
	return (s);
}
