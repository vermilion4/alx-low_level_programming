#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the first element of the list
 * @index: index of the node to return
 *
 * Return: nth node of the list, or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp;
unsigned int i;

temp = head;
i = 0;
while (temp != NULL)
{
if (i == index)
return (temp);
temp = temp->next;
i++;
}
return (NULL);
}
