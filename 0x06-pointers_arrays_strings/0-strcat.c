#include "main.h"

/**
 * *_strcat -Function to concatenate two strings
 * @dest: destination pointer
 * @src: source pointer
 * Return: return void when completed
 */

char *_strcat(char *dest, char *src)
{
	int a = -1;
	int i;

	for (i = 0; dest[i] != '\0';)
		i++;
	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');

	return (dest);
}
