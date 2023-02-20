#include <stdio.h>
/**
 * main - the strting point of the program tha prints the number from 0-9
 *
 * Return: 0 returns the output
 */
int main(void)
{
int n;
for (n = 48; n <= 57; n++)
{
putchar((n) + '0');
}
putchar('\n');
return (0);
}
