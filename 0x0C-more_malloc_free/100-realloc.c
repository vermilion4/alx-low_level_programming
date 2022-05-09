#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free.
 *
 * @ptr: pointer to old size param
 * @old_size: old size param
 * @new_size: new size param
 * Return: pointer.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
char *old_p;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
return (malloc(new_size));

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

old_p = ptr;

p = malloc(new_size);

if (p == NULL)
return (NULL);

if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
p[i] = old_p[i];
}

if (old_size > new_size)
{
for (i = 0; i < new_size; i++)
p[i] = old_p[i];
}

free(ptr);
return (p);
}
