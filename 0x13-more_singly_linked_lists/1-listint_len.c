#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * listint_len - a function
 * @h: a node of struct
 * Return: returns the output
 */
size_t listint_len(const listint_t *h)
{
int x = 0;

while (h)
{
	x++;
	h = h->next;
}
return (x);
}
