#include "main.h"
/**
 * _isupper - function to check upper case chars
 * @c: is a variable of type char
 * Return: return 0 or 1 accordingly
*/

int _isupper(int c)
{
	char c = 'A';

	if (c <= 'Z')
		return (1);
	else
		return (0);
}
