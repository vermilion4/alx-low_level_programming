#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints a string, followed by a new line, to stdout.
 *
 * @str: pointer
 */

void puts2(char *str)
{
for (; *str != '\0'; str += 2)
{
_putchar(*str);
}
_putchar('\n');
}
