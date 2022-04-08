#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c += 1;
		}
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
