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
int len, hold, i;
len = strlen(s);

for (i = 0; i < len; i++)
{
hold = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = hold;
_putchar(*s);
}
_putchar('\n');
}