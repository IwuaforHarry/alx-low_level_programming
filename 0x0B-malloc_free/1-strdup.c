#include "main.h"
/**
 * _strdup - Function that returns a pointer to an allocated soace
 * @str: string to duplicate
 * Return: return string if successful, otherwise return NULL
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int dad;
	unsigned int mom;

	dad = 0;
	mom = 0;

	if (str == NULL)
		return (NULL);

	while (str[mom])
		mom++;
	duplicate = malloc(sizeof(char) * (mom + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[dad] = str[dad]) != '\0')
		dad++;

	return (duplicate);
}
