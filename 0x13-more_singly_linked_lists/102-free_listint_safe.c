#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe -a funtion that frees a list
 * @h: pointer that points to the first node in the list
 * Return: returns the out put
 */
size_t free_listint_safe(listint_t **h)
{
size_t length = 0;
int diff;
listint_t *temp_node;

if (!h || !*h)
	return (0);

while (*h != NULL)
{
	diff = *h - (*h)->next;
	if (diff > 0)
	{
	temp_node = (*h)->next;
	free(*h);
	*h = temp_node;
	length++;
	}
	else
	{
	free(*h);
	*h = NULL;
	length++;
	break;
	}
}

*h = NULL;

return (length);
}

