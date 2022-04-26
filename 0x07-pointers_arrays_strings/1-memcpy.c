#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 * Return: char*
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (src[i] && i < n)
{
dest[i] = src[i];
i++;
}

return (dest);
}