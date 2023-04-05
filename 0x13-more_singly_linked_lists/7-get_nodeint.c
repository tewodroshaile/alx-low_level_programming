#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - a function to accesse with index
 * @head: a node
 * @index: an indix on the linked list
 * Return: returns the indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x = 0;
listint_t *node;

node = head;

while (x < index)
{
	node = node->next;
	x++;
}
if (node == NULL)
	return (NULL);
	
return (node);
}
