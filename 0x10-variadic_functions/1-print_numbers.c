#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - a function that prints a number
 * @separator: a separator variable
 * @n: a number of parametrs to be recived
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int i;
int x;

va_start(arg, n);


for (i = 0; i < n; i++)
{
	x = va_arg(arg, unsigned int);
	printf("%d", x);
	if (separator != NULL)
		printf("%c",* separator);
}
printf("\n");
va_end(arg);
}
