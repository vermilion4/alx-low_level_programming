#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 * */
int main(int argc, char *argv[])
{
int (*op)(int, int);
int num1, num2, res;

if (argc != 4)
{
printf("Error\n");
exit (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op = get_op_func(argv[2]);

if ((num2 == 0 && op == op_div) || (num2 == 0 && op == op_mod))
{
printf("Error\n");
exit (100);
}

if (op == NULL)
{
printf("Error\n");
exit (99);
}
res = op(num1, num2);
printf("%d\n", res);
return (0);
}
