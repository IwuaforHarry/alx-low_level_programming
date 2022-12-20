#include "main.h"

/**
 * rev_string - A function to print strings in reverse
 * @s: pointer to the string
 * Return: return void when complete
 */

void rev_string(char *s)
{
	int i;
	int j;
	int k;
	int tmp;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	k = 0;

	j = i - 1;

	while (k < j)
	{
		tmp = s[k];
		s[k] = s[j];
		s[j] = tmp;
		k++;
		j++;
	}
}
