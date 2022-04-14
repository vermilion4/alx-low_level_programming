#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: 0
 */

int main(void)
{
int count, i, j, prime, largest;

for (i = 2; i <= 612852475143; i++)
{
if (612852475143 % i == 0)
{
count = i / 2;
prime = 1;

for (j = 2; j <= count; j++)
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
printf("%d\n", largest);
return (0);
}
