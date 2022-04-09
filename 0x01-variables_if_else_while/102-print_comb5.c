#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int a, b, c, d;

	a = b = c = d = 48;

	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			c = 48;
			while (c <= 57)
			{
				d = 48;
				while (d <= 57)
				{
					if (a <= 57 && b < 57)
					{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == 57 && b == 56 && c == 57 && d == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
