#include <stdio.h>
/**
 * main - first 98 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
unsigned long int i, j, k, range, prev1, prev2, next1, next2;
j = 1;
k = 2;
range = 1000000000;

printf("%lu", j);
for (i = 1; i < 91; i++)
{
printf(", %lu", k);
k += j;
j = k - j;
}

prev1 = (j / range);
prev2 = (j % range);
next1 = (k / range);
next2 = (k % range);

for (i = 92; i < 99; ++i)
{
printf(", %lu", next1 + (next2 / range));
printf("%lu", next2 % range);
next1 = next1 + prev1;
prev1 = next1 - prev1;
next2 = next2 + prev2;
prev2 = next2 - prev2;
}

printf("\n");
return (0);
}
