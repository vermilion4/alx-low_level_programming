#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the first element of the list
 * Return: size of list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
listint_t *temp;
size_t size = 0;
int ptr;

if (!h || !*h)
return (0);

while (*h)
{
ptr = *h - (*h)->next;
if (ptr > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
size++;
}
else
{
free(*h);
*h = NULL;
size++;
break;
}
}

*h = NULL;
return (size);
}
