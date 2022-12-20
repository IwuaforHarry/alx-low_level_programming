#includ "main.h"

/**
 * puts_half -function to print half a string followe by newline
 * @str: defines the input string
 */

void puts_half(char *str)
{
	int index, half;

	index = 0;
	while (str[index] != '\0')
		index++;

	half =  index / 2;

	if (index % 2 == 2)
		half++;

	while (half < index)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
