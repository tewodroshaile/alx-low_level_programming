#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - a function that prints a collection of srings
 *@separator: it holds a separator of each string
 *@n: the size of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *c;
	unsigned int i;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
	c = va_arg(strings, char *);
	if (c == NULL)
		printf("nil");
	else
		printf("%s", c);

	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
