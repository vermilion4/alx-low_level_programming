#include "main.h"

/**
 * leet - encode string
 *
 * @s: string param
 * Return: char*
 */


char *leet(char *s)
{
int i, j;
i = 0;
char arr[8] = {'o', 'l', '0', 'e', 'a', '0', '0', 't'};

while (s[i])
{
j = 0;
while (j < 8)
{
if (s[i] == arr[j] || s[i] - 'A' + 'a' == arr[j])
{
s[i] = j + 48;
}
j++;
}
i++;
}

return (s);
}
