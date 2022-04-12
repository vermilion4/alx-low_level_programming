#include <stdio.h>
#include "main.h"
/**
 * main - print alphabet
 *
 * Return: Always 0.
 */


void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
