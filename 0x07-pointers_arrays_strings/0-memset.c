#include "main.h"
/**
 * _memset - Fills the first n bytes of memory
 * @s: source string
 * @n: number of bytes to fill the memory with
 * @b: Byte for filling strings
 * Return: return new strings
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		*(s + index) = b;
		index++;
	}
	return (s);
}
