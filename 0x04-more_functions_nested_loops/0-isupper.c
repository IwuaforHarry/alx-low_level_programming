#include "main.h"

/**
 * _isupper -function to check upper case letters
 * @c: char to check
 *
 * Return: return 0 or 1 accordingly
*/

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
