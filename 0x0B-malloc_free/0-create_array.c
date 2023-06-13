#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function that creats an array of character
 * @size: the size of an array variable
 * @c: a character variable
 * Return: returns the output
 */
char *create_array(unsigned int size, char c)
{
char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
