#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - a function delets node at index
 * @head: a pointer points to head
 * @index: index on the list
 * Return: returns the output
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp_node = *head;
listint_t *pass = NULL;
unsigned int i;

if (*head == NULL)
	return (-1);

if (index == 0)
	{
	*head = (*head)->next;
	free(temp_node);
	return (1);
	}
while (i < index - 1)
	{
	if (!temp_node || !(temp_node->next))
		return (-1);
	temp_node = temp_node->next;
	i++;
	}
pass = temp_node->next;
	temp_node->next = pass->next;
	free(pass);

	return (1);

}
