#include "main.h"

/**
 * infinite_add - add two numbers
 * @n1: num1 param.
 * @n2: num2 param.
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: char*
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, calc, longest, n1int, n2int, sum = 0;
while (n1[i] != '\0')
i++;
while (n2[j] != '\0')
j++;
if (i >= j)
longest = i;
else
longest = j;
if ((longest + 1) >= size_r)
return (0);
r[longest + 1] = '\0';
i--, j--, size_r--;
n1int = n1[i] - 48, n2int = n2[j] - 48;
while (longest >= 0)
{
calc = n1int + n2int + sum;
if (calc >= 10)
sum = calc / 10;
else
sum = 0;
if (calc > 0)
r[longest] = (calc % 10) + 48;
else
r[longest] = '0';
if (i > 0)
i--, n1int = n1[i] - 48;
else
n1int = 0;
if (j > 0)
j--, n2int = n2[j] - 48;
else
n2int = 0;
longest--, size_r--;
}
if (r[0] == '0')
return (r + 1);
else
return (r);
}
