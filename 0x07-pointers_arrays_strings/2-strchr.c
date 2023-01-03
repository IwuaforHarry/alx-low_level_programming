#include "main.h"
/**
 * _strchr - Function to locate a character in a string
 * @c: character occurence
 * @s: character string
 * Return: return pointer to first character occurence
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
