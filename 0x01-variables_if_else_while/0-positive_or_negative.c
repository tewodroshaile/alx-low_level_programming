#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** 
*main - discribes the sign of the number
*Return:0  returns the value
**/
int main(void)
{
int n;

srand(time(0);
n = rand() - RAND_MAX / 2;
if (n > 0)
{
prinf(n "is posetive \n");
}
else if (n == 0)
{
printf(n "is zerro \n");
}
else
{
printf(n "is negative \n");
}
return (0);
}
