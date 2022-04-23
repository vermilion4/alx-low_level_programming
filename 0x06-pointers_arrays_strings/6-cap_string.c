#include "main.h"

/**
 * cap_string - capitalize all words in string
 *
 * @s: string param
 * Return: char*
 */

char *cap_string(char *s)
{
int i;
i = 0;

while (s[i])
{
while (s[i] >= 'a' && s[i] <= 'z')
{
if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!'
|| s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')'
|| s[i - 1] == '{' || s[i - 1] == '}')
{
s[i] = s[i] - 'a' + 'A';
}
i++;
}

i++;
}

return (s);
}
