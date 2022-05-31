#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the string of binary digits
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int n;

i = 0;
n = 0;

if (!b)
return (0);

while (b[i] != '\0')
{
if (b[i] == '1')
{
n = n * 2 + 1;
}
else if (b[i] == '0')
{
n = n * 2;
}
else
{
return (0);
}
i++;
}
return (n);
}
