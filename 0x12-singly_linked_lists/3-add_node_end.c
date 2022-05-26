#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added
 * Return: pointer to the new head of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *temp;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (*head);
}
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
return (*head);
}
