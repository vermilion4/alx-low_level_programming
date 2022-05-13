#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - returns the function pointer
 * @s: the operator
 * Return: the function pointer
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i;

while (ops[i].op != NULL && strcmp(s, ops[i].op) != 0)
i++;

return (ops[i].f);
}
