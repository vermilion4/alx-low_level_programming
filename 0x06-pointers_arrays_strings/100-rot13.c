#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 *
 * @s: string param
 * Return: char*
 */

char *rot13(char *s)
{
char alpha[53] =
"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

char rot13[53] =
"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

int i, j;

i = 0;
while (s[i])
{
j = 0;
while (j < 52)
{
if (s[i] == alpha[j])
{
s[i] = rot13[j];
break;
}
j++;
}
i++;
}

return (s);
}
