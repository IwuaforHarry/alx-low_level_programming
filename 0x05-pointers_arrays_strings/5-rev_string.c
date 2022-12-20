#include "main.h"

/**
 * rev_string - A function to print strings in reverse
 * @s: pointer to the string
 * Return: retuin void when complete
 */

void rev_string(char *s)
{
	int a;
	int b;
	int c;
	int Didi;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	c = 0;

	b = a - 1;

	while (c < b)
	{
		Didi = s[c];
		s[c] = s[b];
		s[b] = Didi;
		c++;
		b++;
	}
}
