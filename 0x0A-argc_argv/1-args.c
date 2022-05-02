#include <stdio.h>
#include "main.h"

/**
 * main - entry point, print number of arguments
 *
 * @argv: argument vector (unused)
 * @argc: argument count
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char **argv)
{
printf("%d\n", argc - 1);
return (0);
}
