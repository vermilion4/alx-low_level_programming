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
int len, hold, count;
len = strlen(s);
count = 0;

for (;*s != '\0'; s++)
{
hold = *s;
*s = *(s + ( len - count - 1));
*(s + (len - count - 1)) = hold;
_putchar(*s);
count++;
}

_putchar('\n');
}