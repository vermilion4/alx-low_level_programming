#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the first element of the list
 * return: size of list that was freed
 */ 

size_t free_listint_safe(listint_t **h)
{
listint_t *temp;
size_t size = 0;

if (h == NULL)
return (0);

while (*h != NULL)
{
temp = *h;
*h = (*h)->next;
if (temp->next == NULL)
{
free(temp);
return (size);
}
else
{
free(temp);
size++;
}
}
return (size);
}
