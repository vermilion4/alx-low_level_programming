#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/** 
 * print_list - prints all the elements of a list
 * @h: pointer to the head of the list
 * Return: number of elements in the list
 */

size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
return (count);
}
