#include "main.h"
#include<stdio.h>

/**
 * _isupper -checks if parameter is an uppercase character
 * @c: input character
 * Return: 1 if it is an uppercase character, 0 if otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
