#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point, change cents
 *
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 if change exists, 1 otherwise
 */

int main(int argc, char **argv)
{
int coins[] = {25, 10, 5, 2, 1};
int amount, change = 0, current = 0, hold = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
amount = atoi(argv[1]);
if (amount < 0)
{
printf("0\n");
return (0);
}

for (; coins[current] != '\0'; current++)
{
if (amount >= coins[current])
{
hold = (amount / coins[current]);
change += hold;
amount -= coins[current] * hold;
}
}

printf("%d\n", change);
return (0);
}
