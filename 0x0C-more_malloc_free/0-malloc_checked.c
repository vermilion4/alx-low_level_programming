#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 *
 * @b: parameter 1
 * Return: pointer.
 */

void *malloc_checked(unsigned int b)
{
int *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
else
return (p);
}
