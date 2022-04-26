#include "main.h"

/**
 * print_chessboard - prints chessboard.
 * @a: array pointer
 */

void print_chessboard(char (*a)[8])
{
int i, j, n = 8;

i = 0;
while (i < n)
{
j = 0;
while (j < n)
{
_putchar(a[i][j]);
j++;
}
_putchar('\n');
i++;
}
}
