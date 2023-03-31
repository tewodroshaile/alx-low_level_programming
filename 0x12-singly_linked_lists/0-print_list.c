#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - a print_list function
 * @h: a pointer parameter
 * Return: returns the success of the function
 */
size_t print_list(const list_t *h)
{
int count = 0;
	while (h)
	{
	if (h->str == NULL)
{
	printf("[0] (nil)\n");
}
else
{
	printf("[%d] ", h->len);
	printf("%s \n", h->str);
}
count++;
h = h->next;
}
return (count);
}
