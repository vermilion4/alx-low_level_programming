#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
int i;
i = 0;

if (h == NULL)
return (i);
while (h->prev != NULL)
h = h->prev;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
