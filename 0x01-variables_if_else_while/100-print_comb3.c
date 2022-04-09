#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, c;

	i = 0;
	c = 0;

	while (i <= 9)
	{
		c = 0;
		while (c <= 9)
		{
			if (i < c)
			{
			putchar((i % 10) + '0');
			putchar((c % 10) + '0');
			if (i == 8 && c == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			}
			c++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
