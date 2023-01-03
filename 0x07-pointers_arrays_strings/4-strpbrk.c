#include "main.h"
/**
 * _strpbrk - Function that searches for Bytes in strings
 * @s: location of first occurence
 * @accept: Bytes source string
 * Return: return pointer to the string s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int dad;
	unsigned int mom;

	for (dad = 0; *(s + dad); dad++)
	{
		for (mom = 0; *(accept + mom); mom++)
		{
			if (*(s + dad) == *(accept + mom))
			{
				break;
			}
		}

		if (*(accept + mom) != '\0')
		{
			return (s + dad);
		}
	}
	return (0);
}
