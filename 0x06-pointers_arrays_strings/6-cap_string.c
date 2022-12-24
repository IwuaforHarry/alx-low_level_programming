#include "main.h"

/**
 * cap_string - Function to capitalize all words of string
 * @str: string to be capitalized
 * Return: return capital letters when completed
 */

char *cap_string(char *str);
{
	int i = 0;

	while (str[++i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (str[i - 1] == ' ' ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '`' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}' ||)
			str[i] -= 32;
	}
	return (str);
}
