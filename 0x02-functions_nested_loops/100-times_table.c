#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints n timestable
 *
 * @n: parameter
 * Return: 0
 */

void print_times_table(int n)
{
int i, j, first, last, mult;

if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
mult = i * j;
first = mult / 10;
last = mult % 10;

if (mult < 10)
{
_putchar(' ');
_putchar(first + ' ');
_putchar(last + '0');
}
else if (mult < 100)
{
_putchar(' ');
_putchar(first + '0');
_putchar(last + '0');
}
else
{
_putchar((mult / 100) + '0');
_putchar(((mult - 100) / 10) + '0');
_putchar(last + '0');
}
if (j != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
}
