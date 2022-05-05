#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers..
 *
 * @width: parameter 1
 * @height: parameter 2
 * Return: pointer.
 */

int **alloc_grid(int width, int height)
{
int i, j;

if (height <= 0 || width <= 0)
return (NULL);

int **arr = malloc(sizeof(*arr) * height);

if (arr == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(arr) * width);
if (arr[i] == NULL)
return (NULL);
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}

return (arr);
}
