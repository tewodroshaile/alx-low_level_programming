#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - a function that free a memory space
 * @head: a pointer of a head list
 */
void free_listint(listint_t *head)
{
listint_t *new;

while (head != NULL)
{
	new = head->next;
	free(head);
	head = new;
}
}
