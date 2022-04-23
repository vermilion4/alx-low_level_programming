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
char arr[9] = {'o', 'l', '#', 'e', 'a', '#', '#', 't'};

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
