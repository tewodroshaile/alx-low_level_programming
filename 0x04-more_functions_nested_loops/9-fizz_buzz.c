#include "main.h"
/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */


int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 && i % 5)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
}
else if (i % 3)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
}
else if (i % 5)
{
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
}
}
return (0);
}
