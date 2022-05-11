#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function to find length of a string
 * @s: string
 *
 * Return: string length
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

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
int len_name, len_owner;

len_name = _strlen(name);
len_owner = _strlen(owner);

d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

d->name = malloc(len_name + 1);
if (d->name == NULL)
{
free(d);
return (NULL);
}

d->owner = malloc(len_owner + 1);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}

_strcpy(d->name, name);
d->age = age;
_strcpy(d->owner, owner);

return (d);
}
