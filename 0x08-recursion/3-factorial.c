#include "main.h"
/**
 * factorial - a funtion that callculates factorioal of a number
 * @n: a number variable
 * Return: returns the output of a factorial
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
else if (n == 0)
	return (1);
else
	return (n * factorial(n - 1));

}
