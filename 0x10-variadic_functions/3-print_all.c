#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - print char
 * @c: char
 * Return: void
 */

void print_char(va_list c)
{
printf("%c", va_arg(c, int));
}

/**
 * print_int - print int
 * @i: int
 * Return: void
 */

void print_int(va_list i)
{
printf("%d", va_arg(i, int));
}

/**
 * print_float - print float
 * @f: float
 * Return: void
 */

void print_float(va_list f)
{
printf("%f", va_arg(f, double));
}

/**
 * print_string - print string
 * @s: string
 * Return: void
 */

void print_string(va_list s)
{
char *st;

st = va_arg(s, char *);
if (st == NULL)
st = "(nil)";
printf("%s", st);
}

/**
 * print_all - print all arguments
 * @format: format of arguments
 * @...: arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
va_list ap;
int i, j;
char *separator;
print_a print[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string},
{NULL, NULL}
};

va_start(ap, format);
separator = "";
i = 0;

while (format != NULL && format[i] != '\0')
{
j = 0;
while (print[j].t != NULL)
{
if (format[i] == *print[j].t)
{
printf("%s", separator);
print[j].f(ap);
separator = ", ";
}
j++;
}
i++;
}
va_end(ap);
printf("\n");
}
