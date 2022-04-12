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
int i, j, mult;

if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
mult = i * j;

if (mult < 10)
{
if (j >= 1)
{
_putchar(' ');
_putchar((mult / 10) + ' ');
}
_putchar((mult % 10) + '0');
}
else if (mult < 100)
{
_putchar(' ');
_putchar((mult / 10) + '0');
_putchar((mult % 10) + '0');
}
else
{
_putchar((mult / 100) + '0');
_putchar(((mult - 100) / 10) + '0');
_putchar((mult % 10) + '0');
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
