#ifndef DOG_H
#define DOG_H
/**
 *struct dog - description for dogs
 *@name: name of dog
 *@age: age of dog
 *@owner: name of owener
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif /* DOG_H */
