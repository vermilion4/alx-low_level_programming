#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point, add positive numbers
 *
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 if added, 1 otherwise
 */

int main(int argc, char **argv)
{
int i, sum = 0;

if (argc >= 2)
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
printf("%d\n", 0);
return (0);
}
