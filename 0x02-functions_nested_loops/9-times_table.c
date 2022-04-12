#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the time from 00:00 to 23:59
 *
 * Return: 0
 */

void times_table(void)
{
int i, j, first, last, mult;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
mult = i * j;
first = mult / 10;
last = mult % 10;
if (first == 0)
{
_putchar((first) + ' ');
_putchar((last) + '0');
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
continue;
}
_putchar((first) + '0');
_putchar((last) + '0');
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
