#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input data  to be reverse
 * 
 */
void rev_string(char *s)
{
char revers = s[0];
int counter = 0;
int i;

while (s[counter] != '\0')
counter++;

for (i = 0; i < counter; i++)
{
counter--;
revers = s[i];
s[i] = s[counter];
s[counter] = revers;
}
}
