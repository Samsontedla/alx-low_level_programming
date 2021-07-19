#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - frees memory allocated for d
 *@d: dog to be freed
 *Return: nothing if d is NULL
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
