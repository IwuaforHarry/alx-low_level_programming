#include "main.h"
/**
 * _strlen_recursion - Function that returns string lenght
 * @s: Pointer string
 * Return: return string lenght
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
