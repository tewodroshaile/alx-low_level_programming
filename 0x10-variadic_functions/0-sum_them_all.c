#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all - a function that summs a recived inigers
 *@n: Number of arguments a function recived
 *Return: returns the success report
 */
int sum_them_all(const unsigned int n, ...)
{
va_list arg;
unsigned int i;
int sum = 0;

va_start(arg, n);
for (i = 0; i < n; i++)
{
	sum = sum + (va_arg(arg, unsigned int));
}
va_end(arg);
return (sum);
}
