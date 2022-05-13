#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of an argument passed to argv
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 * (the opcodes of the program)
 */

int main(int argc, char *argv[])
{
int i, num;
int (*f)(int, char **) = main;
unsigned char *opcodes = (unsigned char *)f;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
num = atoi(argv[1]);

if (num < 0)
{
printf("Error\n");
exit(2);
}

for (i = 0; i < num; i++)
{
printf("%02x", opcodes[i]);

if (i == num - 1)
continue;
printf(" ");
}
printf("\n");
return (0);
}
