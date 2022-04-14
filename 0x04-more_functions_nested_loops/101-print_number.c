#include "main.h"

/**
 * print_number - print integer
 *
 * @n: number to print
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

if(num / 10)
{
print_number(num / 10);
}
_putchar((num % 10) + 48);
}
