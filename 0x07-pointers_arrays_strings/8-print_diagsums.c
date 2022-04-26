#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: array pointer
 * @size: size
 */


void print_diagsums(int *a, int size)
{
int firstsum = 0, secondsum = 0, i = 0, j;
int *arr = (int *) a;
while (i < size)
{
j = 0;
while (j < size)
{
if (i == j)
firstsum += arr[i * size + j];

if ((i + j) == (size - 1))
secondsum += arr[i * size + j];
j++;
}

i++;
}
printf("%d, %d\n", firstsum, secondsum);
}
