#include "main.h"

/**
 * puts2 -function to print every other character
 * @str: pointer to a string
 * Return: void when complete
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
