#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted
 * Return: void
 */

void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n / 2);
}
_putchar((n % 2) + '0');

}
