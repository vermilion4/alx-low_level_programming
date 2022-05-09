#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat -  function that concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes
 * Return: pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int i, j, len1 = 0, len2 = 0;

while (s1[len1])
len1++;

while (s2[len2])
len2++;

p = malloc(sizeof(*s1) * len1 + sizeof(*s2) * (n+1));

if (p == NULL)
return (NULL);

i = 0;
while (s1[i] != '\0')
{
p[i] = s1[i];
i++;
}

j = 0;
while (*s2 != '\0')
{
if (n >= (len2 - 1))
{
p[i] = s2[j];
i++;
j++;
}
else
{
while (j < n)
{
p[i] = s2[j];
i++;
j++;
}
p[i] = '\0';
}
s2++;
}

return (p);

}