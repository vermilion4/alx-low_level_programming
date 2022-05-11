#include "dog.h"

/**
 * init_dog - initialize a dog
 * @d: pointer to the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
