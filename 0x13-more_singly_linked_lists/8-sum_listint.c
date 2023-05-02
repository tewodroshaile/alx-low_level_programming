#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - a function tha sdds the values of all nodes
 * @head: the address of the list
 * Return: returns the sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp_node = head;

if (head == NULL)
	return (0);
while (temp_node != NULL)
{
	sum = sum + (temp_node->n);
	temp_node = temp_node->next;

}
	return (sum);

}
