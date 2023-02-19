#include <stdio.h>
/**
 * main - the strting point of the program tha prints the number from 0-9
 *
 * Return: 0 returns the output
 */
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar((n) + 'o');
}
putchar('\n');
return (0);
}
