#include "main.h"
/**
 * print_rev - a function that prints strings in reverse order
 * @s: a string content
 *
 *
 */
void print_rev(char *s)
{
int size, i, j;

size = 0;
for (i = 0; s[i] != '\0'; i++)
{
size++;
}
for (j = size; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
