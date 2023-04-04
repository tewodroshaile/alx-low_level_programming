#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - a function that returns the number of node
 * @h: a recived node parameter
 * Return: returns the node
 */
size_t print_listint(const listint_t *h)
{
int x = 0;

while (h != NULL)
{
	x++;
	printf("%d \n", h->n);
	h = h->next;
}
return (x);
}
