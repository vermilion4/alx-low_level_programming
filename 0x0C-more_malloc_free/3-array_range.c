#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range -  function that creates an array of integers.
 *
 * @min: minimum number param
 * @max: maximum number param
 * Return: pointer.
 */

int *array_range(int min, int max)
{
int *p;
int i, j;
if (min > max)
return (NULL);

i = (max - min) + 1;
p = malloc(i *sizeof(*p));

if (p == NULL)
return (NULL);

j = 0;
while (j <= i && min <= max)
{
p[j] = min;
j++;
min++;
}

return (p);
}
