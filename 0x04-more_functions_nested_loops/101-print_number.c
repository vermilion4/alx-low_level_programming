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
if (num < 10)
{
_putchar(num + 48);
}
else if (num < 100)
{
_putchar(num / 10 + 48);
_putchar(num % 10 + 48);
}
else if (num < 1000)
{
_putchar(num / 100 + 48);
_putchar(((num / 10) % 10) + 48);
_putchar(num % 10 + 48);
}
else if (num < 10000)
{
_putchar(num / 1000 + 48);
_putchar((num / 100) % 10 + 48);
_putchar(((num / 10) % 10) + 48);
_putchar(num % 10 + 48);  
}
}
