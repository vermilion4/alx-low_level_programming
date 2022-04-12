#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10x
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
    int i;
    char c;

    for (i = 0; i <= 9; i++)
    {
        c = 'a';
        while (c <= 'z')
        {
            putchar(c);
            c++;
        }
        putchar('\n');
    }
}
