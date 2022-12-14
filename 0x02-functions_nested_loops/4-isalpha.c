#include "main.h"
/**
 *_isalpha - To check if C is alphabet in lower or upper case
 *@c: is the char to verify
 *
 * Return: 1 or 0 accordingly
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
