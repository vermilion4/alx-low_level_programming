#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer
 * @b: The buffer pointer.
 * @size: size param
 */

void print_buffer(char *b, int size)
{
int byte, i;
if (size <= 0)
printf("\n");
else
{
byte = 0;
while (byte < size)
{
printf("%08x: ", byte);
i = 0;
while (i < 10)
{
if ((i + byte) >= size)
printf("  ");
else
printf("%02x", *(b + i + byte));
if ((i % 2) != 0 && i != 0)
printf(" ");
i++;
}
i = 0;
while (i < 10)
{
if ((i + byte) >= size)
break;
else if (*(b + i + byte) >= 31 &&
*(b + i + byte) <= 126)
printf("%c", *(b + i + byte));
else
printf(".");
i++;
}
if (byte >= size)
continue;
printf("\n");
byte += 10;
}
}
}
