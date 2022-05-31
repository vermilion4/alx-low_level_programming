#include "lists.h"

/**
 * print_listint_safe - prints a listint_t list
 * @head: pointer to the first element of the list
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
size_t i;
listint_t *b = (listint_t *)head;

i = 0;
while (b && b > b->next)
{
printf("[%p] %d\n", (void *)b, b->n);
b = b->next;
i++;
}
if (b)
{
printf("[%p] %d\n", (void *)b, b->n);
printf("-> [%p] %d\n", (void *)b->next, b->next->n);
i++;
}
return (i);
}
