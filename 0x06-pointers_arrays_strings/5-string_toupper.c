#include "main.h"

/**
 * string_toupper - convert lowercase string to upper
 *
 * @s: string param
 * Return: char*
 */


char *string_toupper(char *s)
{
int i;
i = 0;

while (s[i])
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 'a' + 'A';
}
i++;
}

return (s);
}
