#include "main.h"
#include <ctype.h>
/**
 *_islower - return 1 for the lowercase and 0 for else
 * @c: it is the input character
 * Discription: thids function check either the character is lowercase or not.
 * Return: 0 shows the sucusss of the program
 */
int _islower(int c)
{
if (islower(c))
return (1);
else
return (0);
}
