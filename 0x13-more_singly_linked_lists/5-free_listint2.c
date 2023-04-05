#include <stdlib.h>
#include "lists.h"
/**
* free_listint2 - a function that frees the list
* @head: a double pointer to head
*/
void free_listint2(listint_t **head)
{
listint_t *new;

while (*head == NULL)
{
new = (*head)->next;
free(*head);
*head = new;
}
}
