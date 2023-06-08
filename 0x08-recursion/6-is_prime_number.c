#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function desides if an integer is a prime number or not
 * @n: a variable number to be evaluated
 * Return: returns wether prime or not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - a function calculates if a number is prime recursively
 * @n: a variable number to be evaluated
 * @i: a variable iterator
 * Return: returns the output either 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
