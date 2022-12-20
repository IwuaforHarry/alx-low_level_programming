#include "main.h"

/**
 * rev_string - A function to print strings in reverse
 * @s: pointer to the string
 * Return: return void when complete
 */

void rev_string(char *s)
{
	char rv = s[0];
	int c;
	int i;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c; i++)
	{
		c--;
		rv = s[i];
		s[i] = s[c];
		s[c] = rv;
	}
}
