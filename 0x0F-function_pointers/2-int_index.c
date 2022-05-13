#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: the size of the array
 * @cmp: pointer to a function that compares two integers
 * Return: the index of the first element for which cmp(array[i], elem) is true
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || !array || !cmp)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
