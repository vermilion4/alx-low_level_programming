#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: number to be converted
 * @index: index of the bit to be set
 * Return: 1 if the bit was set, -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
int bit;

if (index > sizeof(unsigned long int) * 8)
{
return (-1);
}
mask = 1 << index;
bit = *n | mask;
*n = bit;
return (1);
}
