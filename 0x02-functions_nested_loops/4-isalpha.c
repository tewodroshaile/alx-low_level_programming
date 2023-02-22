#include "main.h"
#include <ctype.h>
/**
 *_isalpha - the main function on this program
 *@c: the input variable
 *Discription: this program cheeks isalphabet case
 * Return: 1 and 0 for the correct output
 */
int _isalpha(int c)
{
if (isalpha(c))
	return (1);
else
	return (0);
}
