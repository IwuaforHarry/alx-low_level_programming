#include "main.h"

/**
 * _strncat - To concatenate n bytes of two strings
 * @dest: destination of pointer
 * @src: dest strings
 * @n: pointer bytes
 * Return: return a pointer to the string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int a = 0;

	while (dest[i++])
		a++;

	for (i = 0; src[i] && i < n; i++)
		dest[a++] = src[i];

	return (dest);
}
