#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the time from 00:00 to 23:59
 *
 * Return: 0
 */

void times_table(void)
{
int i, j;
int mult;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
mult = i * j;
_putchar((mult / 10) + '0');
_putchar((mult % 10) + '0');
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
