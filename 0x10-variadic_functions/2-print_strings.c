#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: separator
 * @n: number of arguments
 * @...: arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *s;

va_start(ap, n);
for (i = 0; i < n; i++)
{
s = va_arg(ap, char *);
if (s == NULL)
s = "(nil)";
printf("%s", s);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}

va_end(ap);
printf("\n");
}
