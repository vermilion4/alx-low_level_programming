#include "main.h"

/**
 * puts_half - prints half a string.
 *
 * @str: pointer
 */

void puts_half(char *str)
{
int i, len, mid, n;
for (len = 0; str[len] != '\0'; len++)
;

if(len % 2 == 0)
{
mid = len / 2;
}
else
{
mid = (len - 1) / 2;
}

while (mid < len)
{
_putchar(str[mid]);
mid++;
}
_putchar('\n');
}