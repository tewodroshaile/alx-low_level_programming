#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - a function that reverses a list
 * @head: a pointr points to head
 * Return: returns the output
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *before = NULL;
listint_t *after = NULL;

while (*head)
	{
	after = (*head)->next;
	(*head)->next = before;
	before = *head;
	*head = after;
	}
	*head = before;

return (*head);
}
