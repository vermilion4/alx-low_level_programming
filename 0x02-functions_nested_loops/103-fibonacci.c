#include <stdio.h>
/**
 * main - sum even fibonacci
 *
 * Return: 0
 */

int main(void)
{
int i;
long int j, k, next, sum;
j = sum = 0;
k = 1;
for (i = 0; i < 70; i++)
{
next = j + k;
j = k;
k = next;

if (next <= 4000000 && next % 2 == 0)
{
sum += next;
}
}
printf("%lu", sum);
return (0);
}
