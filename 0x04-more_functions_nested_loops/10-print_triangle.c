#include "main.h"
/**
 * print_triangle - prints triangle shape
 *@size: the size of the trianle
 */
void print_triangle(int size)
{
int x = 0;
int i;
int j;
int k;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 0; j < size - i; j++)
{
_putchar(' ');
}
for (k = 0; k = j + x; k++)
{
_putchar('#');
}
}
}
}
