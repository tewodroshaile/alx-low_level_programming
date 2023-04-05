#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - a function name
 * @head: the first parameter
 * @n: the value of a struct
 * Return: returns the value of thr added list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
listint_t *end;

if (new == NULL)
	return (NULL);

new->n = n;
new->next = NULL;
if (*head == NULL)
{
	*head = new;
	return (new);
}
end = *head;
while (end->next != NULL)
{
	end = end->next;
}
end->next = new;
return (new);
}
