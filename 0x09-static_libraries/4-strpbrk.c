#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string pointer
 * @accept: string to find first occurrence
 * Return: unsigned int
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0, j;
char *p;

while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
p = &s[i];
return (p);
}
j++;
}
i++;
}

return (0);
}
