#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, C;

	c = 'a';
	C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c += 1;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C += 1;
	}
	putchar('\n');
	return (0);
}
