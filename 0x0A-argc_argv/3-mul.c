#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point, multiply 2 arguments
 *
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 if 2 args available, 1 otherwise
 */

int main(int argc, char **argv)
{
int a, b;

if (argc >= 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}
printf("Error\n");
return (1);
}
