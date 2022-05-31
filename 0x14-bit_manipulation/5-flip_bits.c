#include "main.h"

/**
 * flip_bits - flips the bits of a number
 * @n: number to be converted
 * @m: number of bits to be flipped
 * Return: the converted number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result = 0;
unsigned int i;

for (i = 0; i < sizeof(unsigned long int) * 8; i++)
{
if ((n & 1) != (m & 1))
{
set_bit(&result, i);
}
n >>= 1;
m >>= 1;
}
return (result);
}
