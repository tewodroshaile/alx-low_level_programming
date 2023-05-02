#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - a function that returns the values of a list
 * @h: the linked lists
 * Return: returns the output
 */
size_t print_listint(const listint_t *h)
{
int count = 0;

while (h != NULL)
	{
	printf("%d\n", h->n);
	count++;
	h = h->next;
	}
return (count);
}
