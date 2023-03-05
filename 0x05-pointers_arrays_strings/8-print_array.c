#include "main.h"
#include "stdio.h"
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
printf("%d", a[i]);
}
else
{
printf(",");
printf(" ");
printf("%d", a[i]);
}
}
putchar('\n');
}
