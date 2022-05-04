#include "main.h"
#include <stdio.h>

int main(void)
{
    char *str;
    int len;
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");

    return (0);
}