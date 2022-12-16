#include "main.h"
/**
 * _isupper -function to check upper case letters
 * @c: char to check
 *
 * Return: return 0 or 1 accordingly
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
