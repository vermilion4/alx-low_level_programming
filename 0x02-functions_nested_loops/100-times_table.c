#include "main.h"
#include <stdio.h>
/**
 * times_table - prints n timestable
 *
 * @n: parameter
 * Return: 0
 */

void print_times_table(int n)
{
int i, j, first, second, last, mult;

if (n > 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
mult = i * j;
first = mult / 10;
last = mult % 10;

if (first == 0)
{
if (j >= 1)
{
_putchar(first + ' ');
}
_putchar(last + '0');
if (j != n)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
continue;
}

if (mult >= 100)
{
first = mult / 100;
second = (mult - 100) / 10;
_putchar(first + '0');
_putchar(second + '0');
_putchar(last + '0');
if (j != n)
{
_putchar(',');
}
continue;
}

_putchar(first + '0');
_putchar(last + '0');

if (j != n)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
_putchar('\n');
}
}
}
