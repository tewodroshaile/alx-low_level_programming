#include "main.h"
/**
 * factorial - a factorial function
 * @n: a factotialed number
 * Return: returns the output
 */
int factorial(int n)
{
if (n > 0)
	return (n * factorial(n - 1));
else if (n == 0)
	return (1);
else
return (-1);

}
