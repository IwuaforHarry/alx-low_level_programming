#include "main.h"
/**
 *_isdigit -a function that checks for digits
 *@c: digit to be xhecked
 *
 * Return: return 1
*/

int _isdigit(int c)
{
	c = 0;

	if (c >= 0 || c <= 9)
		return (1);

	if (c < 0 || c > 9)
		return (0);
}
