#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - a function that returns the length of a list
 * @h: alist pointr that pointst to a collection of list
 * Return: returns a number
 */
size_t listint_len(const listint_t *h)
{
int count = 0;

while (h != NULL)
{
	h = h->next;
	count++;
}
	return (count);
}
