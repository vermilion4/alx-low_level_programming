#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the first element of the list
 *
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
size_t i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}
