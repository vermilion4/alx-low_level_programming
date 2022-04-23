#include "main.h"

/**
 * reverse_array - reverse an array
 *
 * @a: array param
 * @n: no of elem in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i, hold, mid;

i = n - 1;
mid = n / 2;

while (i >= mid)
{
hold = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = hold;
i--;
}
}
