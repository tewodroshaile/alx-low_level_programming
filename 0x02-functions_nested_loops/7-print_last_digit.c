#include "main.h"
/**
 * print_last_digit - it prints the last digit of the number
 * @x: the requestd number
 * Return: it returns the last digit of the number
 */
int print_last_digit(int x)
{
int i;
if (x >= 0){
i = x % 10;
_putchar(i + '0');
}
else
{
x = x * -1;
i = x % 10;
_putchar(i + '0');
}
return (i);
}
