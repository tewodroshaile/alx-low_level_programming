#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - a function that reurns number of elements
 * @h: a linked list pointer
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
int count = 0;

while (h)
{
	count++;
	h = h->next;
}
return (count);
}
