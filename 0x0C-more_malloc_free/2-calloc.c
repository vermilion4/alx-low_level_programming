#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc -  function that allocates memory for an array, using malloc.
 *
 * @nmemb: number of elements param
 * @size: size param
 * Return: pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

p  = malloc(size * nmemb);

if (p == NULL)
return (NULL);

i = 0;
while (i < (size * nmemb))
{
p[i] = 0;
i++;
}

return (p);
}
