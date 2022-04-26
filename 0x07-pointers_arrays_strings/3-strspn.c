#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string pointer
 * @accept: prefix
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j = 0;

while (s[i] && accept[j])
{
if (!(s[i] == accept[j]))
{
j++;
}
else
{
i++;
j = 0;
}
}

return (i);
}
