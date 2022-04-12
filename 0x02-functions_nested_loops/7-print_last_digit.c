#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: parameter
 *
 * Return: 0
 */


int print_last_digit(int a)
{
int last;
last = a % 10;

if (last < 0)
{
last *= -1;
}

_putchar(last + '0');
return (last);
}
