#include "main.h"
/**
 * print_array - print a value of an array
 * @a: an array
 * @n: the size of an array
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i == 0)
{
_putchar(a[i] + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(a[i] + '0');
}
}
_putchar('\n');
}
