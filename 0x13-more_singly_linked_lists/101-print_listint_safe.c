#include "lists.h"

/**
 * print_listint_safe - prints a listint_t list
 * @head: pointer to the first element of the list
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
size_t i = 0;
long int temp;

while (head)
{
temp = head - head->next;
i++;
printf("[%p] %d\n", (void *)head, head->n);
if (temp > 0)
head = head->next;
else
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}
}

return (i);
}
