#include "main.h"
/**
 * _puts_recursion - Function to print a string followed by a new line
 * @s: String pointer to be printed
 * Return: return void when complete
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
