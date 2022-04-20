#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @s: pointer
 */

void print_rev(char *s)
{
char hold;

char *end = s + (strlen(s) - 1);

while (end > s)
{
hold = *s;
*s = *end;
*end = hold;

_putchar(*s);
++s, --end;
}
_putchar('\n');
}