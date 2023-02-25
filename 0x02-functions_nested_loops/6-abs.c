#include "main.h"
/**
 * _abs - calculates the abbsoulute value of a number
 *@x: the number
 *Return: return the absolute value
 */

int _abs(int x)
{
if (x < 0)
{
x = x * -1;
return (x);
}
else
return (x);	
}
