#include "main.h"

/**
 * flip_bits - number of bits to be flipped
 * @n: number to be converted
 * @m: number of bits to be flipped
 * Return: number of bits needed to flip to get m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int i, count;
unsigned long int mask;

count = 0;
mask = 1;
for (i = 0; i < sizeof(unsigned long int) * 8; i++)
{
if ((n & mask) != (m & mask))
{
count++;
}
mask = mask << 1;
}
return (count);
}
