#include "main.h"
/**
 * _pow_recursion - x^y function
 * @x: is the 1st variable
 * @y: is the second varisble
 * Return: returns the output of a function
 */
int _pow_recursion(int x, int y)
{
if (y >  0)
	return (x * (_pow_recursion(x, y - 1)));
else if (y == 0)
	return (1);
else
	return (-1);
}
