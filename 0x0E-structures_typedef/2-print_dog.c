#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print a dog
 * @d: pointer to the dog
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
d->name = "";

if (d->owner == NULL)
d->owner = "";

printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
