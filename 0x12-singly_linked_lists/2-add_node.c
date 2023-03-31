#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _strlen - a function that calculate a lengthe of a string
 * @s: a string parameter
 * Return: returns the length
 */

int _strlen(const char *s)
{
int i = 0;

while (s[i] != '\0')
{
	i++;
}
return (i);
}
/**
 * add_node - the add node function
 * @head: a pointer variable that points a poiter head
 * @str: a parameter that holds a value
 * Return:  it returns  the output
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *add;

add = malloc(sizeof(list_t));
if (add == NULL)
	return (NULL);

add->str = strdup(str);
add->len = _strlen(str);
add->next = *head;
*head = add;
return (add);
}
