#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: String one
 * @s2: String two
 * Return: Return 0 if matched. else return Str1 - Str2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
