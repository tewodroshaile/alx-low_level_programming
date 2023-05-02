#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - inserting a node on an index
 * @head: a list of linked list
 * @index: a position for a node tobe inserted
 * Return: returns the output
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp_node = head;
unsigned int count = 0;

while (head && count != index)
{
	temp_node = temp_node->next;
	count++;
}
if (temp_node == NULL)
	return (NULL);
else
	return (temp_node);
}
