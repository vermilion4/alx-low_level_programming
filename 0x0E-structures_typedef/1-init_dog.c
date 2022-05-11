#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a dog
 * @d: pointer to the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
