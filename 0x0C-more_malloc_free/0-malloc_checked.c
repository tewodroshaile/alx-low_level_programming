#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* malloc_checked - checks the memmory and  termination with a status value of 98
* @b: allocated memory variable
* Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{

void *i;

i = malloc(b);
if (i == NULL)
exit(98);

return (i);
}

