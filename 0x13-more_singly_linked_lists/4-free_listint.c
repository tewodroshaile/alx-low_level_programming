#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - a functiont it frees a space
 * @head: a linked list pointer
 *
 * Description: a code that frees the pointer
 */
void free_listint(listint_t *head)
{
listint_t *free_node;

while (head != NULL)
{
	free_node = head->next;
	free(head);
	head = free_node;
}
}
