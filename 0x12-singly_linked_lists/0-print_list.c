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
if (h->str == NULL)
{
	printf("[%d]", 0);
	printf("%s\n", h->str);
}
else
{
	printf("[%d]", h->len);
	printf("%s\n", h->str);
}
return (0);
}
