#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - a function to add a node
 * @head: the first parameter
 * @n: the second parameter
 * Return: returns the out put of the function
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));

if (new == NULL)
	return (NULL);

new->n = n;
new->next = *head;
*head = new;
return (new);
}