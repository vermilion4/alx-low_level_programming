#include "dog.h"
#include <stdlib.h>

/**
 * *_strcpy - copies string from pointer to pointer.
 *
 * @dest: destination
 * @src: source
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{

int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');

return (dest);
}

/**
 * new_dog - initialize a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

d->name = name;
if (d->name == NULL)
{
free(d);
return (NULL);
}
d->age = age;
d->owner = owner;
if (d->owner == NULL)
{
free(d);
return (NULL);
}

_strcpy(d->name, name);
_strcpy(d->owner, owner);

return (d);
}
