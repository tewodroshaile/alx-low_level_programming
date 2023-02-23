#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - shows the sign of the number
 *@i : the number
 *Discription: shows...
 *Return: 0
 */
void positive_or_negative(int i)
{
if (i < 0)
printf("%d is negative", i);
else if (i > 0)
printf("%d is positive", i);
return (0);
}
