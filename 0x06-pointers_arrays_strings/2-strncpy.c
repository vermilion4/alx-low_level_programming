#include "main.h"

/**
 * _strncpy - 
 * 
 * @param dest 
 * @param src 
 * @param n 
 * @return char* 
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
while(i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}