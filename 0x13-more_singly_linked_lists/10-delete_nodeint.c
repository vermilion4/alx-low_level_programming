#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to the first element of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp;
listint_t *temp2;
unsigned int i;

if (head == NULL)
return (-1);
if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}
temp = *head;
for (i = 0; i < index - 1; i++)
{
if (temp == NULL)
return (-1);
temp = temp->next;
}
temp2 = temp->next;
temp->next = temp2->next;
free(temp2);
return (1);
}
