#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: number to be converted
 * @index: index of the bit to be checked
 * Return: the value of the bit at index or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
int mask;
int bit;

mask = 1 << index;
bit = n & mask;
bit = bit >> index;
return (bit);
}
