#include <stdio.h>
#include "main.h"

/**
 * main - entry point, print arguments
 *
 * @argv: argument vector
 * @argc: argument count
 * Return: 0
 */

int main(int argc, char **argv)
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
