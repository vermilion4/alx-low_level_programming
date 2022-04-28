#include "main.h"

/**
 * factorial - returns factorial of a number.
 * @n: number
 * Return: factorial of n
 */

int natural_sqrt(int n, int min, int max);

int _sqrt_recursion(int n)
{
return (natural_sqrt(n, 1, n));
}

/* Find natural square root */
int natural_sqrt(int n, int min, int max)
{
int i = (min + max) / 2;

if (n < 0)
return (-1);

if (i * i == n)
return (i);

if (min == max)
return (-1);

else if (i * i < n)
return (natural_sqrt(n, i + 1, max));

else
return (natural_sqrt(n, min, i - 1));

}
