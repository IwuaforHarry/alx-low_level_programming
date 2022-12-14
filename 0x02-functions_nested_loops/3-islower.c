#include "main.h"
/**
 *_islower - program to print lower case letters
 *
 *@c: is to be checked or verified
 * Return: return 1 when successful otherwise return 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
