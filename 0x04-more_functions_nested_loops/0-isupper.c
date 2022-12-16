#include "main.h"

/**
 * _isupper -function to check upper case letters
 * @c: char to check
 * Return: 1 if it is an uppercase character, 0 if otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
