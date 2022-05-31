#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted
 * Return: void
 */

void print_binary(unsigned long int n)
{
unsigned long int mask;

mask = 1 << (sizeof(unsigned long int) * 8 - 1);

while (mask > 0)
{
if (n & mask)
_putchar('1');
else
_putchar('0');
mask = mask >> 1;
}
}
