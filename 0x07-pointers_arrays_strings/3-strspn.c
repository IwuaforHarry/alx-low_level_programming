#include "main.h"
/**
 * _strspn - Function to get the lenght of prefix substring
 * @s: initial byte segment
 * @accept: Byte source
 * Return: returns number of bytes of the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int dad;
	unsigned int mom;

	for (mom = 0; *(s + mom); mom++)
	{
		for (dad = 0; *(accept + dad); dad++)
		{
			if (*(s + mom) == *(accept + dad))
				break;
		}

		if (*(accept + dad) == '\0')
			break;
	}
	return (mom);
}
