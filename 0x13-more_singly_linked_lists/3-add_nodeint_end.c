#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/*
 * add_nodeint_end - a fiction that adds a node at the end
 * @head: a pointer to the new node
 * @n: the value to the new node
 * Return: returns the output
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *x = *head;

	new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = NULL;
if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}
	while (x->next)
		x = x->next;
	x->next = new_node;
	return (new_node);
}
