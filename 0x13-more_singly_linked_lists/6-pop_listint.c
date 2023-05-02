#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - a function that delets a node
 * @head: a poitr that points a list pointer
 * Return: return the output
 */
int pop_listint(listint_t **head)
{
listint_t *temp_node;
int value;

if (*head == NULL)
	return (0);

value = (*head)->n;
temp_node = (*head)->next;
free(*head);
*head = temp_node;

return (value);
}
