#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - function that creates a new dog
 *@name: name of new dog
 *@age: age of new dog
 *@owner: owner of new dog
 *Return: new dog if success or NULL in error
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_len = 0, owner_len = 0, i;
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));

	for (; name[name_len]; name_len++)
		;
	name_len++;
	for (; owner[owner_len]; owner_len++)
		;
	owner_len++;

	dog->name = malloc(name_len * (sizeof(char)));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
	{
		dog->name[i] = name[i];
	}
	dog->owner = malloc(owner_len * (sizeof(char)));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < owner_len; i++)
	{
		dog->owner[i] = owner[i];
	}
	dog->age = age;
	return (dog);
}
