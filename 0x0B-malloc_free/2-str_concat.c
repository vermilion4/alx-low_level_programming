#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: pointer if success.
 */

char *str_concat(char *s1, char *s2)
{
unsigned int i, j, k;
char *p;

if (s1 == NULL || s2 == NULL)
return (NULL);

i = 0;
while (s1[i])
i++;

j = 0;
while (s2[j] != '\0')
{
s1[i] = s2[j];
i++;
j++;
}
printf("%d", i);
p = malloc(sizeof(*p) * (i + 1));

if (p == NULL)
return (0);

k = 0;
while (s1[k] != '\0')
{
p[k] = s1[k];
k++;
}

return (p);
}
