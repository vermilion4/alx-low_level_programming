#include "main.h"

/**
 * print_number - prints number
 *
 * @n: number param
 */


void print_number(int n)
{
unsigned int num = 0;
if (n < 0)
{
num = -n;
_putchar('-');
}
else
{
num = n;
}

if (num / 10)
{
print_number(num / 10);
}
_putchar((num % 10) + 48);
}
