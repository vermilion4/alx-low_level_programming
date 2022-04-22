#include "main.h"

/**
 * _strncat - concatenate n bytes of string 
 * 
 * @param dest 
 * @param src 
 * @param n 
 * @return char* 
 */


char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (dest[i])
{
i++;
}

j = 0;
while (src[j] && j < n)
{
dest[i] = src[j];
i++;
j++;
}
return (dest);
}
