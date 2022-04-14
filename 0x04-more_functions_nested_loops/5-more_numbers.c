#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print numbers 0 - 14 10x
 *
 * Return: 0
 */

void more_numbers(void)
{
int c, i;

for (i = 0; i < 10; i++)
{
for (c = 0; c <= 14; c++)
{
if (c > 9)
{
_putchar(c / 10 + 48);
}
_putchar(c % 10 + 48);
}
_putchar('\n');
}
}
