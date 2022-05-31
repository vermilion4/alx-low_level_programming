#include "main.h"

/**
 * clear_bit - clears the bit at index of a given unsigned int
 * @n: number to be converted
 * @index: index of the bit to be cleared
 * Return: 1 if the bit was cleared, -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
int bit;

if (index > sizeof(unsigned long int) * 8)
{
return (-1);
}
mask = ~(1 << index);
bit = *n & mask;
*n = bit;
return (1);
}
