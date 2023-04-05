#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - isert a node on specified index
 * @head: a list
 * @idx: an index
 * @n: the value of the node
 * Return: return the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *node, *new, *temp;
unsigned int x = 0;

node = *head;
while (x < idx)
{
	x++;
	node = node->next;
}
temp = node->next;
new = malloc(sizeof(listint_t));
new->n = n;
new->next = NULL;

node->next = new;
new->next = temp;
return (node);
}
