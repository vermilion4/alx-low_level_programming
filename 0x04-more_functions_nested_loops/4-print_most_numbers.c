#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print numbers 0 - 9
 *
 * Return: 0
 */

void print_most_numbers()
{
char c;

for (c = '0'; c <= '9'; c++)
{
if (c != '2' && c != '4')
{
_putchar(c);
}
}

_putchar('\n');
}
