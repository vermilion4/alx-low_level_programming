#include "main.h"

/**
 * _strcat - concatenate strings
 *
 * @dest: destination parameter
 * @src: source parameter
 * Return: char*
 */


char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
while (dest[i])
{
i++;
}

j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
return (dest);
}
