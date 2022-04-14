#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print triangle of #
 *
 * @size: triangle size
 */

void print_triangle(int size)
{
int i, j;

for (i = 0; i < size; i++)
{
for (j = 1; j <= size; j++)
{
if (j >= (size - i))
{
_putchar('#');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
