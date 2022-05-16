#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - sum all arguments
 * @n: number of arguments
 * @...: arguments
 *
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;

va_start(ap, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
