#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string pointer
 * @needle: substring
 * Return: char *
 */

char *_strstr(char *haystack, char *needle)
{
int i, j = 0, needlelen = 0;
char *p;

while (needle[needlelen])
needlelen++;

i = 0;
while (haystack[i] && needle[j])
{
if (haystack[i] == needle[j])
{
i++;
j++;
}
else
{
i = i - j + 1;
j = 0;
}
}

if (j == needlelen)
{
p = &haystack[i - j];
return (p);
}
else
return (0);
}
