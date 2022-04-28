#include "main.h"
#include <stdio.h>

int _strlen(char *s);
int compare(char *s, int n1, int n2);

/**
 * is_palindrome - check if string is palindrome.
 * @s: string
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen(s) - 1));
}

/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * compare - compares first and last char in string recursively.
 * @s: string
 * @min: first char.
 * @max: last char.
 * Return: 1 if same, 0 otherwise
 */
int compare(char *s, int min, int max)
{
	if (s[min] == s[max])
	{
		if (min == max || min == max + 1)
			return (1);
		return (0 + compare(s, min + 1, max - 1));
	}
	return (0);
}


