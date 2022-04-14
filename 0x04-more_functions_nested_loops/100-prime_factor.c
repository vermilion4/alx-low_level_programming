#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: 0
 */

int main(void)
{
long i, j, prime, largest, num = 612852475143;

for (i = 2; i <= num; i++)
{
if (num % i == 0)
{

prime = 1;

for (j = 2; j <= i; j++)
{
if (i % j == 0)
{
prime = 0;
break;
}
}

if (prime)
{
largest = i;
}
}

}
printf("%lu\n", largest);
return (0);
}
