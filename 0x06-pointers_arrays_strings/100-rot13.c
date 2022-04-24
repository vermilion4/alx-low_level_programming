#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 *
 * @s: string param
 * Return: char*
 */

char *rot13(char *s)
{
char alpha[53] = {'a', 'b', 'c', 'd', 'e', 'f',
'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
'U', 'V', 'W', 'X', 'Y', 'Z'};

char rot13[53] = {'n', 'o', 'p', 'q', 'r', 's',
't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c',
'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
'H', 'I', 'J', 'K', 'L', 'M'};
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
