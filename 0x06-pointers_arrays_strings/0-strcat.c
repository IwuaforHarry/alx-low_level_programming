#include "main.h"

/**
 * *_strcat -Function to concatenate two strings
 * @dest: destination pointer
 * @src: source pointer
 * Return: return void when completed
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int i = 0;

	while (dest[i++])
		a++;

	for (i = 0; src[i]; i++)
		dest[i++] = src[a];

	return (dest);
}
