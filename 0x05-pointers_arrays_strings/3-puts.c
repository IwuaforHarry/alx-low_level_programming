#include "main.h"
/**
 * _puts - function to print a string to standard output
 * @str: The string variable to print
 * Returns: returns lenght of the string
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
