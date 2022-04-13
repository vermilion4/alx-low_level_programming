#include <stdio.h>
/**
 * main - first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
int i;
long int j, k, next;
j = 0;
k = 1;
for (i = 0; i < 50; i++)
{
next = j + k;
j = k;
k = next;
if (i == 49)
{
printf("%lu\n", next);
break;
}
printf("%lu, ", next);
}

return (0);
}
