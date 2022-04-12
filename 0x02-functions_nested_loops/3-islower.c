#include <stdio.h>
#include "main.h"

/**
 * _islower - check lowercase char
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
if (c >= 97 && c <= 127)
{
return 1;
}
else
{
return 0;
}
}