#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print diagonal line n times
 *
 * @n: number of times to print diagonal
 */

void print_diagonal(int n)
{
int i, j;

for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
{
if (i < j)
{
_putchar(' ');
}
if (i == j)
{
_putchar('\\');
}
}
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
