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
unsigned int i;
listint_t *new;
listint_t *temp;

if (head == NULL)
return (NULL);
if (idx == 0)
{
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
temp = *head;
for (i = 0; i < idx - 1; i++)
{
if (temp == NULL)
return (NULL);
temp = temp->next;
}
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = temp->next;
temp->next = new;
return (new);
}
