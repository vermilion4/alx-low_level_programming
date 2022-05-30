#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first element of the list
 * Return: pointer to the first element of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next;

while (*head != NULL)
{
next = *head->next;
*head->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
