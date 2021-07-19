#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - function that initialize a variable of type struct dog
 *@d: struct dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
