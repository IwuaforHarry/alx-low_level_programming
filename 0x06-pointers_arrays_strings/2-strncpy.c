#include "main.h"

/**
 * _strncpy -Function that copies a string
 * @dest: pointer to destination char
 * @src: source char pointer
 * @n: max number of bytes to be copied
 * Return: pointer to the resultant string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i != n)
		dest[i++] = '\0';
	return (dest);
}
