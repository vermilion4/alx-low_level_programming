#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string pointer
 * @c: character to locate
 * Return: char*
 */

char *_strchr(char *s, char c)
{
int i = 0;
char *p;

while (s[i] >= 0)
{
if (s[i] == c)
{
p = &s[i];
break;
}
else
{
p = 0;
}
i++;
}

return (p);
}
