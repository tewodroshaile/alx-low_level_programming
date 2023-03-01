#include "main.h"
#include <string.h>
/**
 * strncpy - string copy function
 * @dest: destination parameter
 * @src: source parameter
 * @n: intiger variable
 *
 * Description: strcpy project
 * Return: returns the compid value
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
char *x = *src;

for (i = 0; i < n; i++)
{
x [i] = src[i];
}
strcpy(dest, x);
return (&dest);
}
