#include "main.h"
/**
 * _print_rev_recursion - Function that prints reverse strings
 * @s: Pointer to reversed string
 * Return: return void once complete
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
