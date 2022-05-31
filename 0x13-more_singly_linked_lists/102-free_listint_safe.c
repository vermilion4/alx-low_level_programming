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
int ptr;

if (!h || !*h)
return (0);

while (*h)
{
temp = *h;
ptr = (int)temp->next;
*h = (*h)->next;
free(temp);
if (ptr == (int)*h)
return (0);
size++;
}
return (size);
}
