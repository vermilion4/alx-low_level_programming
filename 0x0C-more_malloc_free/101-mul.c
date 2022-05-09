#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - prints length of string
 *
 * @s: pointer
 * Return: count (length of string)
 */
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * _isdigit - checks if contains non-digit
 *
 * @c: string parameter
 * Return: 0 if non-digit found, 1 otherwise
 */
int _isdigit(char *s)
{
int i = 0;

while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}

/**
 * error - handles error
 */
void error(void)
{
printf("Error\n");
exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
char *p1, *p2;
int i, *mul, len, len1, len2, first, second, remainder, a = 0;
p1 = argv[1], p2 = argv[2];
if (argc != 3 || !_isdigit(p1) || !_isdigit(p2))
error();
len1 = _strlen(p1), len2 = _strlen(p2);
len = len1 + len2 + 1;
mul = malloc(len *sizeof(*mul));
if (mul == NULL)
return (1);
for (i = 0; i <= len1 + len2; i++)
mul[i] = 0;
for (len1 = len1 - 1; len1 >= 0; len1--)
{
first = p1[len1] - '0';
remainder = 0;
for (len2 = _strlen(p2) - 1; len2 >= 0; len2--)
{
second = p2[len2] - '0';
remainder += mul[len1 + len2 + 1] + (first *second);
mul[len1 + len2 + 1] = remainder % 10;
remainder /= 10;
}
if (remainder > 0)
mul[len1 + len2 + 1] += remainder;
}
for (i = 0; i < len - 1; i++)
{
if (mul[i])
a = 1;
if (a)
_putchar(mul[i] + '0');
}
if (!a)
_putchar('0');
_putchar('\n');
free(mul);
return (0);
}
