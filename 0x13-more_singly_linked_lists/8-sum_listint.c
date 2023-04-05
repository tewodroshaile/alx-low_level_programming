#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - a function that returns the sum of the list values
 * @head: the linked lists
 * Return: returns the sum
 */
int sum_listint(listint_t *head)
{
listint_t *node, *new;
int x, y;

node = head;
new = head;
x = 1;
while (node->next != NULL)
{
	x++;
	node = node->next;
}
y = 0;
while (new != NULL)
{
y = y + (new->n);
new = new->next;
}
return (y);
}
