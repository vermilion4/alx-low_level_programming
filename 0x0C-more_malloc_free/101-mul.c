#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free.
 *
 * @ptr: pointer to old size param
 * @old_size: old size param
 * @new_size: new size param
 * Return: pointer.
 */

int main(int argc, char *argv[])
{
unsigned int a, b, mul;
if (argc != 3)
{
printf("Error\n");
exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[2]);
mul = a * b;

printf("%d\n", mul);
return (0);
}
