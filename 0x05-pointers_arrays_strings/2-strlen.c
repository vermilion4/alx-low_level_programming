#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - updates value it points to to 98
 *
 * @s: pointer
 */

int _strlen(char *s)
{
int count = 0;

for (;*s != '\0'; s++)
{
count++;
}

return (count);
}
