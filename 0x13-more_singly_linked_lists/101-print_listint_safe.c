#include "lists.h"

/**
 * print_listint_safe - prints a listint_t list
 * @head: pointer to the first element of the list
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *current, *next;
size_t i = 0;

if (head == NULL)
return (0);

current = head;
next = head->next;

while (next != NULL && next < current)
{
i += 1;
printf("[%p] %d\n", (void *)current, current->n);
current = current->next;
next = next->next;
}
printf("[%p] %d\n", (void *)current, current->n);
i += 1;
if (next != NULL)
printf("-> [%p] %d\n", (void *)next, next->n);
return (i);
}
