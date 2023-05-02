#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - a function that insert a node on the index
 * @head: a pointer points to a list
 * @idx: the index on the list
 * @n: the value of the node
 * Return: returns the updated list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node;
listint_t *temp_node = *head;
unsigned int i;

new_node = malloc(sizeof(listint_t));
new_node->n = n;
new_node->next = NULL;

for (i = 0; i < idx; i++)
{
	if (i == idx - 1)
	{	new_node->next = temp_node->next;
		temp_node->next = new_node;
		return (new_node);

	}
	else
		temp_node = temp_node->next;
}
return (NULL);
}
