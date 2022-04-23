#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: destination parameter
 * @src: source parameter
 * @n: n bytes parameter
 * Return: char*
 */


char *_strncpy(char *dest, char *src, int n)
{
int i, j;

j = 0;
while (src[j])
{
j++;
}

i = 0;
while (src[i] && i < n)
{
dest[i] = src[i];
i++;
}

i = j;
while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
