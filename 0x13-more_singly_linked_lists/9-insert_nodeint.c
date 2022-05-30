#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first element of the list
 * @idx: index to insert the new node
 * @n: data for the new node
 * Return: address of the new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new;
listint_t *temp;
listint_t *prev;

if (head == NULL)
return (NULL);

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

temp = *head;
prev = NULL;
while (temp != NULL && idx > 0)
{
prev = temp;
temp = temp->next;
idx--;
}

if (temp == NULL)
return (NULL);

prev->next = new;
new->next = temp;

return (new);
}
