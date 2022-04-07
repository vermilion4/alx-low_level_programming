/*
 * Header files
 * string.h contains strcpy
 */

# include <stdio.h>
# include <string.h>

/*
 * main - Entry point
 *
 * Return: prints exactly \"Programming is like building a 
 * multilingual puzzle, followed by a new line.
 */

int main(void)
{
	char str1[55];

	strcpy(str1, "\"Programming is like building a multilingual puzzle");

	puts(str1);

	return (0);
}
