#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - a function that frees a spce of  a pontr
 * @head: a pointer that points a pointr list
 */
void free_listint2(listint_t **head)
{
listint_t *free_node;

while (*head != NULL)
{
	free_node = (*head)->next;
	free(*head);
	*head = free_node;
}
	head = NULL;
}
