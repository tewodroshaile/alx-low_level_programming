#include "main.h"
/**
 * reverse_array - a funtonion that prints a value in reverse order.
 * @a: an array of string
 * @n: an intiger that shows the size of an array.
 * Description: reverse_array
 */
void reverse_array(int *a, int n)
{
int i, j;

for (i = 0; i < n--; i++)
{
j = a[i];
a[i] = a[n];
a[n] = j;
}
}
