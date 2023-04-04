#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
size_t print_listint(const listint_t *h)
{
int x;
struct listint_s *link = NULL;

link = h;
while (link != NULL)
{
	x++;
	link = link->next;
}
return (x);
}
