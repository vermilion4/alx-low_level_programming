#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to a
 *  newly allocated space in memory, which contains
 *  a copy of the string given as a parameter
 *
 * @str: parameter
 * Return: pointer if success.
 */

char *_strdup(char *str)
{
unsigned int i;
char *p;
p = malloc(sizeof(str));

if (str == NULL)
return (NULL);

if (p == NULL)
return (0);

i = 0;
while ((p[i] = str[i]) != '\0')
{
i++;
}

return (p);
}
