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
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
{
++i;
if(s[i] == ' ')
{
++i;
}
if(s[i] == '\n')
{
++i;
}
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 'a' + 'A';
}
}

i++;
}

return (s);
}
