#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - a function calculates natural square root of a number
 * @n: a variable to calculate the square root of
 * Return: returns resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - a function to find the natural number
 * @n: a varuiable to calculate the sqaure root of
 * @i: iterator variable
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}


