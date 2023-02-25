#include "main.h"

/**
 * print_sign - check the code.
 *@x: the number tobe checked its sign
 * Return: it returns eithrt 1,-1,0
 */
int print_sign(int x)
{
if (x > 0)
{
_putchar('+');
return (1);
}
else if (x == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
