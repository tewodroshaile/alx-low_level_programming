#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - a function that delete the head of the list
 * @head: the head node
 * Return: returns the data of the head
 */
int pop_listint(listint_t **head)
{
listint_t *new;
int x;
if (head == NULL || *head == NULL)
{
	return (0);
}

new = *head;
*head = new->next;
x = new->n;
free(new);
return (x);
}
