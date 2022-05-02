#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
int i = 1, j, sum = 0;

while (i < argc)
{
j = 0;
while (argv[i][j] != '\0')
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(argv[i]);
i++;
}
printf("%d\n", sum);
return (0);
}
